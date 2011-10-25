/* =============================================================================
*
*			file name :			world.h	
*			\authors :				Armando Diaz T.
*			created :				Oct. 21, 2011	
*			\brief :					The main class to run the game & create
*										other entities.
*
*			\details :				
*
===============================================================================
*/ 

#ifndef WORLD_H
#define WORLD_H

#include "entity.h"
#include "visual_window.h"
#include <iostream> // will not be necessary later

class World : Entity
{
public:
	World* getWorld() { return this /*worldInstance*/ ; }
	void run() ; // GET RID OF THIS LATER !!!!!
	World() ;
};

World::World()
{
	if( true/* worldInstance  == NULL*/ )  // an instance of the world hasn't been created yet.
	{
		//worldInstance = this ;
		this->componentMap[ "GraphicsComponent" ]  = (Component*) new VisualWindow() ;
	}

}

void  World::run() 
{

	bool quit = false ; 

	VisualWindow* mainWindow = (VisualWindow*) this->componentMap[ "GraphicsComponent" ]  ;

	if( mainWindow == NULL )
		std::cout << "Error could not use the visualWindow component "  ;
	while( mainWindow->keepWindowAlive() )
	{
		//CL_KeepAlive::process(0);
	}


}

#endif