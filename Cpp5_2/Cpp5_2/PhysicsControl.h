#pragma once

#include <iostream>
#include "PhysicalObject.h"
#include "Environment.h"

class PhysicsControl
{
	Environment environment;
public:
	PhysicsControl(){};
	PhysicsControl(Environment newEnvironment) :
		environment(newEnvironment) {};
 
	// calculates the final speed 
	float finalSpeedOfFreeFallForPhysicalObject(const PhysicalObject &anObject, double secondsOfFreeFall);
	static float finalSpeedOFFreeFallForEnvironment(const Environment &Environment, float secondOFFreeFall);
};
