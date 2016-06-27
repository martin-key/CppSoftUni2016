#pragma once
#include <iostream>

class Environment
{
public:
	Environment() {};
	Environment(double newGravity)
	{
		gravity = newGravity;
	}

	std::string name;
	double gravity;
	
};


