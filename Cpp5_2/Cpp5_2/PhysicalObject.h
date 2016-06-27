#pragma once
#include <iostream>
#include "Object.h"
#include "Environment.h"

class PhysicalObject : public Object
{
	float weight;
public:
	inline void setWeight(float newWeight)
	{
		weight = newWeight;
	}
};