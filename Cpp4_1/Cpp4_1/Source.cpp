#include <iostream>
class Car;

class Man
{
public:
	void crashACar(Car &aCar);
};

class Car
{
	bool needsARepair;
	
public:
	Car() {};
	Car(float aPrice) : price(aPrice) {
		needsARepair = true;
	};
	float price;

	friend void Man::crashACar(Car &aCar);
	friend class Mechanic;
	
};

class Mechanic
{
public:
	float priceForRepairingACar(Car &aCar)
	{
		return aCar.price * 0.05;
	}
	void repairACar(Car &aCar)
	{
		aCar.needsARepair = false;
	}
};


void Man::crashACar(Car &aCar)
{
	aCar.needsARepair = true;
}

int main()
{
	Car aCar(1000);
	Mechanic aMechanic;
	Man aMan;

	aMan.crashACar(aCar);
	std::cout << aMechanic.priceForRepairingACar(aCar) << std::endl;
	aMechanic.repairACar(aCar);


	return 0;
}