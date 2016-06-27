#include "Environment.h"
#include "PhysicalObject.h"
#include "PhysicsControl.h"
#include <iostream>

#define EARTH_GRAVITY 9.81
#define MOON_GRAVITY 1.622

int variable = 0;
int main()
{
	PhysicalObject myObject;
	myObject.setWeight(100);
	Environment moonEnvironment = Environment(MOON_GRAVITY);
	Environment earthEnvironment = Environment(EARTH_GRAVITY);
	int secondsOFFall = 30;// by requiremtn
	
	std::cout << PhysicsControl::finalSpeedOFFreeFallForEnvironment(moonEnvironment, secondsOFFall);

	return 0;
}