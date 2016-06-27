#include "Person.h"

using namespace MammalNamespace::PersonNamespace;

void Person::setAge(int newAge)
{
	age = newAge;
}

void Person::setPin(std::string newPin)
{
	int sht = asdf();
	pin = newPin;
}

int asdf()
{
	return 6;
}