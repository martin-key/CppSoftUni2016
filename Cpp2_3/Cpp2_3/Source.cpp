#include <iostream>

class Origin
{
public:
	float x;
	float y;
};

class Size
{
public:
	float height;
	float width;
};

class Rect
{
private:
	double length;
	

public:
	Origin origin;
	Size size;
	
	double getLength();
	void setLength(double newLength);
	double area();
};

double Rect::getLength()
{
	//Interenet request for data
	// Calculation
	return length;
}

void Rect::setLength(double newLength) // in cm
{
	length = newLength * 2.54f;
}

double Rect::area()
{
	return size.height * size.width;
}

int main()
{
	Rect rect;
	rect.origin.x = 6;
	rect.origin.y = 9;
	rect.size.height = 8;
	rect.size.width = 3;

}