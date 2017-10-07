/*! \file animations/animationsprocess.h
    

    Defines a process for animations as element of animations pipeline
 */ 
#pragma once
#include <functional>
#include "../object.h"
namespace sad
{

namespace db
{
class Object;
}

namespace animations
{
class Animations;
class Animation;
class Instance;
class Group;
/*! A process for animations as element of animations pipeline
 */
class Process: public sad::Object
{
public:
    SAD_OBJECT
    /*! Must be inherited
     */
    virtual ~Process();
    /*! Restarts an animation process
        \param[in] animations an animations, which will invoke sad::animations::Process::process on object
     */
    virtual void restart(sad::animations::Animations* animations) = 0;
    /*! Clears finished flag
     */
    virtual void clearFinished() = 0;
    /*! Whether animation is finished
     */
    virtual bool finished() const = 0;
    /*! Called on every step of instance work
        \param[in] animations an animation pipeline, which should hold a state cache
     */
    virtual void process(sad::animations::Animations* animations) = 0;
    /*! Pauses an instance
     */
    virtual void pause() = 0;
    /*! Resumes an instance
     */
    virtual void resume() = 0;
    /*! Cancels an animation
        \param[in] animations an animations to be used
     */
    virtual void cancel(sad::animations::Animations* animations) = 0;
    /*! Called, when process is added to pipeline
     */
    virtual void addedToPipeline() = 0;
    /*! Called, when process is removed from pipeline
     */
    virtual void removedFromPipeline() = 0;
    /*! If current instance is related to specified object, stops related part
        \param[in] object a related object
        \param[in] a animations list
     */
    virtual void stopInstancesRelatedToObject(sad::db::Object* object, sad::animations::Animations* a) = 0;
    /*! Returns true of if process is related to object
        \param[in] object a tested object
        \return true if related
     */
    virtual bool isRelatedToObject(sad::db::Object* object) = 0;
    /*! Returns true of if process is related to object, matched by function
        \param[in] f function for testing
        \return true if related
     */
    virtual bool isRelatedToMatchedObject(const std::function<bool(sad::db::Object*)>& f) = 0;
    /*! If current instance is related to matched objects, stops related part
        \param[in] f function for testing
        \param[in] a animations list
     */
    virtual void stopInstancesRelatedToMatchedObject(const std::function<bool(sad::db::Object*)>& f, sad::animations::Animations* a) = 0;
    /*! Returns true of if process is related to animation, matched by function
        \param[in] f function for testing
        \return true if related
     */
    virtual bool isRelatedToMatchedAnimation(const std::function<bool(sad::animations::Animation*)>& f) = 0;
    /*! If current instance is related to matched objects, stops related part
        \param[in] f function for testing
        \param[in] a animations list
     */
    virtual void stopInstancesRelatedToMatchedAnimation(const std::function<bool(sad::animations::Animation*)>& f, sad::animations::Animations* a) = 0;
    /*! Returns true of if process is related to instance, matched by function
        \param[in] f function for testing
        \return true if related
     */
    virtual bool isRelatedToMatchedInstance(const std::function<bool(sad::animations::Instance*)>& f) = 0;
    /*! If current instance is related to matched objects, stops related part
        \param[in] f function for testing
        \param[in] a animations list
     */
    virtual void stopInstancesRelatedToMatchedInstance(const std::function<bool(sad::animations::Instance*)>& f, sad::animations::Animations* a) = 0;
    /*! Returns true of if process is related to instance, matched by function
        \param[in] f function for testing
        \return true if related
     */
    virtual bool isRelatedToMatchedGroup(const std::function<bool(sad::animations::Group*)>& f) = 0;
    /*! If current instance is related to matched objects, stops related part
        \param[in] f function for testing
        \param[in] a animations list
     */
    virtual void stopInstancesRelatedToMatchedGroup(const std::function<bool(sad::animations::Group*)>& f, sad::animations::Animations* a) = 0;
};

}

}

DECLARE_TYPE_AS_SAD_OBJECT_ENUM(sad::animations::Process)
