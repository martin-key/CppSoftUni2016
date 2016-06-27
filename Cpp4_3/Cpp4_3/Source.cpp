#include <iostream>

class Driver abstract
{
public:
	std::string id;
};

class MotorcycleDriver : public Driver
{
public:
	char category;
};

class CarDriver: public Driver
{
public:
	int maxPassengers;
};

class Women : public MotorcycleDriver, public CarDriver
{
	int age;
public:
	std::string name;
};

int main()
{
	Women aWoman;
	aWoman.CarDriver::id = "12345678";
	aWoman.MotorcycleDriver::id = "123321123";
	aWoman.maxPassengers = 8;
	aWoman.category = '1';
	aWoman.name = "A woman has no Name (;";

	return 0;
}

