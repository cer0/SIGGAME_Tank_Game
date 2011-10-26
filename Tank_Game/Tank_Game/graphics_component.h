/* =============================================================================
*
*			file name :			graphics_component.h	
*			\authors :				Armando Diaz T.
*			\brief :					The base class for all components
*										 involved with rendering entities on screen.
*
*			\details :				Will encapsulate the graphics context ( a ClanLib mechanism for
*										drawing stuff), which components will use to draw sprites and
*										other graphics. The common interface for all graphics components
*										will be the render() method.
*
===============================================================================
*/ 
#ifndef GRAPHICS_COMPONENT_H
#define GRAPHICS_COMPONENT_H

#include "precomp.h"
//#include "entity.h"
#include "component.h"
class GraphicsComponent : Component
{
	// WILL INSERT CODE FOR GRAPHICS CONTEXT LATER !!!!
public:  
	GraphicsComponent();
	~GraphicsComponent() { }  ;

	void render() ;					// these methods will be overridden by derived classes
	void update() { } ;
};

#endif