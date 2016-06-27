#include <iostream>

class Cube
{
public:
	Cube(double a) { side = a; };
	double side;
};

double getBasePerimeter(const Cube &aCube)
{
	return 4 * aCube.side;
}

double getSurface(const Cube &aCube)
{
	return 6 * aCube.side * aCube.side;
}

double getVolume(const Cube &aCube)
{
	return aCube.side * aCube.side * aCube.side;
}

int main()
{
	Cube myCube = Cube(1);
	std::cout << getBasePerimeter(myCube) << std::endl;
	std::cout << getSurface(myCube) << std::endl;
	std::cout << getVolume(myCube) << std::endl;
	return 0;
}