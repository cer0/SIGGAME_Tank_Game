#ifndef OBJECTSTATS_H
#define OBJECTSTATS_H

#include "component.h"

class ObjectStats : Component
{
private:
	int mass,  xposition, yposition, speed, size;
	float slope ; // degree value 0 - 359 
};
#endif