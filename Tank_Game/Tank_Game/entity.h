/* =============================================================================
*
*			file name :			entity.h
*			\authors :				Armando Diaz T.
*			\brief :					The Entity class is a base class to all game objects.
*
*			\details :				Each subclass of Entity.h is uniquely identified by the field
*										"type" which is a typecasted std::string. To avoid naming conflicts,
*										each subclass should have a type name equal to its class name.
*										The field "entityID" uniquely identifies each game entity, and 
*										is assigned by external code.
*
===============================================================================
*/ 
#ifndef ENTITY_H
#define ENTITY_H

#include "precomp.h"
#include <map>

typedef std::string entityTypeID ; // used to name entities ex: "Tank", "Missile"
typedef std::string componentTypeID ;
typedef std::string componentSubsystemID ;

class Component ;


class Entity
{
private:
		long int entityID ;
		entityTypeID type ; 
protected:												// subclasses must have access to map
		std::map< const componentSubsystemID, Component* > componentMap ;

public:
	const entityTypeID& getEntityType() const { return type ; }
	// we're not allowing an object to change it's type right now

	// accessing the entity id
	void setEntityID( long int newEntityID ) { entityID = newEntityID ; }
	long getEntityID() { return entityID ; } 

	// accessing Components
	Component* getComponent( const componentSubsystemID& componentName );
	void setComponent( Component* newComponent ) ;
	void clearComponents() ;

};


//#endif
/* =============================================================================
*
*			file name :			component.h
*			\authors :				Armando Diaz T.
*			\brief :					The base class to all game Components.
*
*			\details :				component.h will be subclassed to create 
*										actual components used to makeup entities.
*										Each component has a ComponentTypeID
*										( called "typeName" ) used to identify the
*										specific type of component. Each 
*										component belongs to a subsystem, and is
*										indicated by the subsystemID member.
*
===============================================================================
*/ 
//#ifndef COMPONENT_H
//#define COMPONENT_H


class Component
{
protected:
	componentTypeID typeName ;
	componentSubsystemID subsystemID ;
	Entity* componentOwner ;									// which entity is the component assigned to 

public:
	Component() ;				
	~Component()  { }								// force us to create a destructor for subclasses
	virtual void update() {}										// update component's state

	void setOwner( Entity* newOwner ) { componentOwner = newOwner  ; };
	Entity* getOwner() { return componentOwner ; }

	componentSubsystemID& getSubsystemType() { return subsystemID ; } 

};

#endif