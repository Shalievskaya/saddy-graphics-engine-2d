#include "os/generatemipmaps30.h"
#include "log/log.h"
#include "renderer.h"

static PFNGLGENERATEMIPMAPEXTPROC _generateMipMaps  = NULL;

bool sad::os::generateMipMaps30(sad::Renderer * r, GLenum target)
{
	PFNGLGENERATEMIPMAPEXTPROC __generateMipMaps = _generateMipMaps;
	if (_generateMipMaps == NULL)
	{
		__generateMipMaps = (PFNGLGENERATEMIPMAPEXTPROC)getProcAdress((const GLubyte*)("glGenerateMipmap"));
		_generateMipMaps = __generateMipMaps;
	}
	bool result = false;
	if (__generateMipMaps)
	{
		__generateMipMaps(target);
		result = true;
	}
	else
	{
		SL_COND_LOCAL_INTERNAL("Failed to obtain glGenerateMipmap", r);
	}
	return result;
}
