#include <iostream>

class Vehicle
{
public:
	int numberOfUsers;
	float maxSpeed;
};

class Car : public Vehicle
{
public:
	float horsePower;
	int numberOfSeats;
	float rimSize;
};

class PickUpTruck: public Car
{
public:
	float trunkSurface;
	float trunkSize;
	float maxPayloadWeight;
};

class Hatchback : public Car
{
public:
	float fuelConsumption;
	bool hasSunRoof;
};

int main()
{
	PickUpTruck fordRaptor;
	fordRaptor.horsePower = 320;
	fordRaptor.maxPayloadWeight = 2000;
	fordRaptor.rimSize = 21;
	fordRaptor.maxSpeed = 200;

	Hatchback hondaCivic;
	hondaCivic.fuelConsumption = 10; // Gaz + 1 maslo
	hondaCivic.horsePower = 900;
	hondaCivic.rimSize = 14;
	hondaCivic.hasSunRoof = true;
	hondaCivic.maxSpeed = 230;

	std::cout << fordRaptor.horsePower << std::endl; // members from Car clas
	std::cout << hondaCivic.horsePower << std::endl;

	std::cout << fordRaptor.maxSpeed << std::endl; // member from Vehicle class
	std::cout << hondaCivic.maxSpeed << std::endl;

	std::cout << fordRaptor.maxPayloadWeight << std::endl; // members from specific classes
	std::cout << hondaCivic.fuelConsumption << std::endl;

	return 0;
}

