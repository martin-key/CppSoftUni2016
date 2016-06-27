#include <iostream>
#include <math.h>
#include <string>
#include "Figure.h"

#define VAR_NAME 5
//#define DEBUG 1

enum weekDays
{
	monday,
	tuesday,
	wednesday,
	thursday,
	friday,
	saturday,
	sunday
};

weekDays checkDay()
{
	return monday;
}

void asdf()
{
	switch (checkDay())
	{
	case monday:
		// do sth
		break;
	case tuesday:
		// do sth else
		break;
	}
}
class Rectangle : public Figure
{
public:
	float sideA;
	float sideB;
	float perimeter();
	float surface();
};

float Rectangle::perimeter()
{
#ifdef DEBUG
	std::cout << "A debug message";
#endif
	return 2 * sideA + 2 * sideB;
}

float Rectangle::surface()
{
	return sideA * sideB;
}

class Circle : public Figure
{
public:
	float radius;
	float perimeter();
	float surface();
};

float Circle::perimeter()
{
	return 2 * 3.141592 * radius;
}

float Circle::surface()
{
	return 3.141592 * radius * radius;
}

int main()
{
	Rectangle rect;
	rect.sideA = 4;
	rect.sideB = 6;

	Circle aCircle;
	aCircle.radius = VAR_NAME;

	std::cout << rect.perimeter() << std::endl;
	std::cout << aCircle.perimeter() << std::endl;

	return 0;
}