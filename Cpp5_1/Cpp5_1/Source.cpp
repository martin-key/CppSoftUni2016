#include <iostream>
#include "Person.h"

int main()
{
	PersonNamespace::Person aPerson = PersonNamespace::Person("Jasmin", PersonNamespace::female);
	aPerson.setAge(21);
	aPerson.setPin("12348765");

	std::cout << "Cout kato pichui";

	return 0;
}