#include <iostream>

class Person
{
public:
	int age;
	int height;
};

class ID
{
public:
	std::string idNumber;
	int personAge;
	int personHeight;
	ID &operator=(const Person &aPerson)
	{
		this->personAge = aPerson.age;
		this->personHeight = aPerson.height;
	}
};

int main()
{
	Person aPerson;
	aPerson.age = 21;
	aPerson.height = 178;

	ID anID;
	anID = aPerson;

	return 0;
}