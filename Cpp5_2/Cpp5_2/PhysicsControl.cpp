#include "PhysicsControl.h"

float PhysicsControl::finalSpeedOfFreeFallForPhysicalObject(
	const PhysicalObject &anObject, 
	double secondsOfFreeFall)
{
	float vFinal = environment.gravity * secondsOfFreeFall;
	return vFinal;
}

float PhysicsControl::finalSpeedOFFreeFallForEnvironment(const Environment &Environment, float secondOFFreeFall)
{
	float vFinal = Environment.gravity * secondOFFreeFall;
	return vFinal;
}