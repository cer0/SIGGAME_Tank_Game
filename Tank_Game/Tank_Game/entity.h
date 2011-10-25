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
#include "component.h"
#include <map>

typedef std::string entityTypeID ;						// used to name entities ex: "Tank", "Missile"


typedef std::string componentTypeID ;			// these had to be redeclared for compiler to be happy :)
typedef std::string componentSubsystemID ;

class Component ;											// forward declaring the component class because of inter-depedence 


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

#endif