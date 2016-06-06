#include <iostream>


class Animal
{
	int _numberOfLegs;
public:
	inline Animal(int numberOfLegs) { setNumberOfLegs(numberOfLegs); };
	inline Animal() { _numberOfLegs = 0; };
	inline ~Animal() { std::cout << "Animal has been release\n"; };
	std::string name;
	int age;
	inline int numberOfLegs() { return _numberOfLegs; };
	inline void setNumberOfLegs(int newNumberOfLegs) 
	{
		if (newNumberOfLegs < 0) return;
		_numberOfLegs = newNumberOfLegs;
	};
};
int main()
{
	Animal snakeGergana = Animal();
	Animal dog(4);
	std::cout << snakeGergana.numberOfLegs() << std::endl;
	std::cout << dog.numberOfLegs() << std::endl;

	return 0;
}


