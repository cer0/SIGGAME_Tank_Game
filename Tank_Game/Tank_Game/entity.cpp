/* =============================================================================
*
*			file name :			entity.cpp	
*			\authors :				Armando Diaz T.
*			\brief :					
*
*			\details :				
*
===============================================================================
*/

#include "precomp.h"
#include "entity.h"
#include "component.h"

void Entity::clearComponents() //  THIS IS A MEMORY LEAK, WILL NEED TO BE FIXED LATER
{
	componentMap.clear() ;
}

/*** getComponent *******************************************************************
*		returns the Component for a given subsystem, will return NULL, if no such component exists
***********************************************************************************/
Component* Entity::getComponent( const componentSubsystemID& componentName )
{
	Component* retrievedComponent = componentMap[ componentName ] ;
	return retrievedComponent ;
}

/*** setComponent *******************************************************************
*		adds parameter component to componentMap, 
*		if another component is already there, it's deleted
***********************************************************************************/
void Entity::setComponent( Component* newComponent ) 
{
	Component* oldComponent = componentMap[ newComponent->getSubsystemType() ] ;

	if( oldComponent != NULL )
		delete oldComponent ; 

	componentMap[ newComponent->getSubsystemType() ] = newComponent ;
}
