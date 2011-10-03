#ifndef PHYSICSSUBSYSTEM_H
#define PHYSICSSUBSYSTEM_H
#include "subsystem.h"
#include <map>

class PhysicsSubsystem : Subsystem
{
	PhysicsSubsystem();

public:
	std::map< long int, Component > componentMap ;

public:
	bool registerEntity( long int entityId );
	bool removeEntity( long int entityId );
	void run() ;

	// doing physics stuff
	void movingObject( int time );

	bool collisionDetect()  ;
	
};


#endif