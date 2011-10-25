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
#ifndef GRAPHICS_COMPONENT_H
#define GRAPHICS_COMPONENT_H

#include "precomp.h"
//#include "entity.h"
#include "component.h"
class GraphicsComponent : Component
{
	// INSERT CODE FOR GRAPHICS CONTEXT LATER !!!!
public:  
	GraphicsComponent();
	~GraphicsComponent() { }  ;

	void render() ;
	void update() { } ;
};

GraphicsComponent::GraphicsComponent()
{
	this->subsystemID = "GraphicsComponent" ; 
}

#endif