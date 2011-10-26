/* =============================================================================
*
*			file name :			world.h	
*			\authors :				Armando Diaz T.
*			created :				Oct. 21, 2011	
*			\brief :					The main class to run the game & create
*										other entities.
*
*			\details :				This class will contain components to create the main game
*										Window, store other entity objects and 
*										Subsystems to iterate over the entity objects. The run() method
*										is the only interface to outside code, which must be kept constant.
*										Steps will be taken to ensure that only one instance of this class
*										exists during runtime.
*
===============================================================================
*/ 

#ifndef WORLD_H
#define WORLD_H

#include "precomp.h"
#include "entity.h"
#include "visual_window.h"

class World : Entity
{
public:
	World* getWorld() { return this  ; } // this method is completely useless right now, will be useful later
	void run() ; 
	World() ;
};


#endif