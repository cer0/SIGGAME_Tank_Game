/* =============================================================================
*
*			file name :			world.cpp	
*			\authors :				Armando Diaz T.
*			\brief :					Implementation file for World class methods
*
===============================================================================
*/

#include "precomp.h"
#include "world.h"
#include "visual_window.h"
#include "component.h"
#include <exception>


/*** World() *******************************************************************
*		Default constructor adds necessary components to the World class instance.
*		Eventually, UI components, input components & containers for game entities will
*		be added.
***********************************************************************************/
World::World()
{
	try {
		this->componentMap[ "GraphicsComponent" ]  = (Component*) new VisualWindow() ;
	}
	catch( std::exception& e)
	{
		std::cout << e.what() << std::endl ;
	}
}

/*** run() *******************************************************************
*		Main loop allowing the program to run. Will eventually be in charge of calling all 
*		subsystems to do their jobs, including rendering, collision detection etc ...
***********************************************************************************/
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