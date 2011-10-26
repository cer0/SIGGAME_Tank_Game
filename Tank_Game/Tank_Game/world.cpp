/* =============================================================================
*
*			file name :			world.cpp	
*			\authors :				Armando Diaz T.
*			\brief :					
*
*			\details :				
*
===============================================================================
*/

#include "precomp.h"
#include "world.h"
#include "visual_window.h"
#include "component.h"

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
		CL_KeepAlive::process(0);
	}

}