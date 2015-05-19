#include "db/schema/schema.h"

#include "sadscopedlock.h"

sad::db::schema::Schema::Schema(sad::db::schema::Schema* parent) : m_already_locked(false)
{
	if (parent)
	{
		addParent(parent);
	}
}

sad::db::schema::Schema::~Schema()
{

}

bool sad::db::schema::Schema::add(const sad::String& s, sad::db::Property* prop)
{
	bool ok = false;
    m_lock.lock();
    m_already_locked = true;
	if (this->getProperty(s) == NULL)
	{
		m_properties.insert(s, prop);
		ok = true;
	}
    m_already_locked = false;
    m_lock.unlock();
	return ok;
}

void sad::db::schema::Schema::remove(const sad::String & s)
{
	if (m_properties.contains(s))
	{
		delete m_properties[s];
		m_properties.remove(s);
	}
}

sad::db::Property* sad::db::schema::Schema::getProperty(const sad::String& s) const
{
    sad::db::schema::Schema* me = const_cast<sad::db::schema::Schema*>(this);
    if (!m_already_locked)
    {
        me->m_lock.lock();
    }
	sad::db::Property * result = NULL;
	if (m_parent.size())
	{
		for(size_t i = 0; i < m_parent.size() && result == NULL; i++)
		{
			result = m_parent[i]->getProperty(s);
		}
	}

	if (result == NULL && m_properties.contains(s))
	{
		result = m_properties[s];
	}
    if (!m_already_locked)
    {
        me->m_lock.unlock();
    }
	return result;
}

bool sad::db::schema::Schema::check(const picojson::value& v)
{
    sad::ScopedLock locallock(&m_lock);

    if (m_parent.size()) 
	{
		for(size_t i = 0; i < m_parent.size(); i++)
		{
			if (m_parent[i]->check(v) == false)
			{
				return false;
			}
		}
	}
	bool success = true;
	for(sad::PtrHash<sad::String, sad::db::Property>::iterator it = m_properties.begin();
		it != m_properties.end();
		++it)
	{
		success = success && it.value()->check(it.key(), v);
	}
	return success;
}

bool sad::db::schema::Schema::load(sad::db::Object * o, const picojson::value& v)
{
    sad::ScopedLock locallock(&m_lock);

	if (!o || v.is<picojson::object>() == false)
	{
		return false;
	}
	bool result = true;
	for(size_t i = 0; i < m_parent.size() && result; i++)
	{
		result = result && m_parent[i]->load(o, v);
	}
	if (!result)
	{
		return result;
	}
	for(sad::PtrHash<sad::String, sad::db::Property>::iterator it = m_properties.begin();
		(it != m_properties.end()) && result;
		++it)
	{
		const picojson::value * prop = picojson::get_property(v, it.key());
		if (prop)
		{
			sad::db::Variant tmp;
			it.value()->get(o, tmp);
			result = result && tmp.load(*prop);
			if (result)
			{
				result = result && it.value()->set(o, tmp);
			}
		}
		else
		{
			result = false;
		}
	}

	return result;
}

void sad::db::schema::Schema::save(sad::db::Object * linked, picojson::value & v)
{
    sad::ScopedLock locallock(&m_lock);

	if (!linked)
	{
		return;
	}
	if (v.is<picojson::object>() == false)
	{
		v = picojson::object();
	}
	else
	{
		const picojson::object& vo = v.get<picojson::object>();
		if (vo.find("type") == vo.end())
		{
			v.insert("type", linked->serializableName());
		}
	}
	for(size_t i = 0; i < m_parent.size(); i++)
	{
		m_parent[i]->save(linked, v);
	}
	
	for(sad::PtrHash<sad::String, sad::db::Property>::iterator it = m_properties.begin();
		it != m_properties.end();
		++it)
	{
		sad::db::Variant tmp;
		it.value()->get(linked, tmp);
		v.insert(it.key(), tmp.save());
	}
	
}

const sad::Vector<sad::db::schema::Schema*>& sad::db::schema::Schema::parent() const
{
	return m_parent;
}

void sad::db::schema::Schema::addParent(sad::db::schema::Schema* parent)
{
    sad::ScopedLock locallock(&m_lock);
	m_parent << parent;
}

const sad::Hash<sad::String, sad::db::Property*>& sad::db::schema::Schema::ownProperties() const
{
	return m_properties;
}
