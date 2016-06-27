#include <iostream>

class Shape
{
	public:
	virtual float getPerimeter() = 0;
	virtual float getSurface() = 0;
};

class Rectagle:public Shape
{
public:
	float sideA;
	float sideB;
	float getPerimeter()
	{
		return 2 * sideA + 2 * sideB;
	};
	float getSurface()
	{
		return sideA*sideB;
	};
};

class Circle : public Shape
{
public:
	float diameter;
	float getPerimeter()
	{
		return 3.141592 * diameter;
	}
	float getSurface()
	{
		return 3.141592 * diameter * diameter / 4;
	}
};

int main()
{
	Rectagle aRectangle;
	aRectangle.sideA = 5;
	aRectangle.sideB = 8;
	std::cout << aRectangle.getPerimeter() << std::endl;
	std::cout << aRectangle.getSurface() << std::endl;

	Circle aCircle;
	aCircle.diameter = 2;
	std::cout << aCircle.getPerimeter() << std::endl;
	std::cout << aCircle.getSurface() << std::endl;
	return 0;
}

