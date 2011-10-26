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

#include "precomp.h"
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


#endif