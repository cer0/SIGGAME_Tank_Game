#ifndef SUBSYSTEM_H
#define SUBSYSTEM_H
#include "component.h"
#include <map>

class Subsystem
{
	Subsystem();

private:
	std::map< long int, Component > componentMap ;

	void run();
};
#endif