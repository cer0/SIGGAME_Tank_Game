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
//
//#include "precomp.h"
//#include "entity.h"
//
//typedef std::string componentTypeID ;
//typedef std::string componentSubsystemID ;
//
//typedef class Entity Entity ;
//class Component
//{
//protected:
//	componentTypeID typeName ;
//	componentSubsystemID subsystemID ;
//	Entity* componentOwner ;									// which entity is the component assigned to 
//
//public:
//	Component() ;				
//	~Component()  { }								// force us to create a destructor for subclasses
//	virtual void update() {}										// update component's state
//
//	void setOwner( Entity* newOwner ) { componentOwner = newOwner  ; };
//	Entity* getOwner() { return componentOwner ; }
//
//	componentSubsystemID& getSubsystemType() { return subsystemID ; } 
//
//};
//
//Component::Component()
//{
//
//}
//
//#endif