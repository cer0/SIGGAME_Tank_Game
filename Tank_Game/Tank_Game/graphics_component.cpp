/* =============================================================================
*
*			file name :			graphics_component.cpp	
*			\authors :				Armando Diaz T.
*			\brief :					The base class for all components
*										 involved with rendering entities on screen.
*
===============================================================================
*/

#include "precomp.h"
#include "graphics_component.h"

/*** GraphicsComponent() *******************************************************************
*		Default constructor simply sets the subsystem ID. This constructor should be called
*		via :				DerivedClass::DerivedClass() : GraphicsComponent() { // code // }
***********************************************************************************/
GraphicsComponent::GraphicsComponent()
{
	this->subsystemID = "GraphicsComponent" ; 
}