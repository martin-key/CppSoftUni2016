#include <iostream>


class Size
{
public:
	Size(float newHeight, float newWidth)
	{
		height = newHeight;
		width = newWidth;
	}
	Size()
	{
		height = 0;
		width = 0;
	}

	~Size()
	{
		std::cout << "Destructor size called" << std::endl;
	}
	float height;
	float width;
};

class Position
{
public:
	Position(float newX, float newY)
	{
		x = newX;
		y = newY;
	}
	Position()
	{
		x = 0;
		y = 0;
	}
	~Position()
	{
		std::cout << "Destructior position called" << std::endl;
	}
	float x;
	float y;
};

class Rectangle
{
	double _perimeter;
	double _surface;
	double _diagonal;
public:
	inline Rectangle(Position newPosition, Size newSize)
	{
		size = newSize;
		position = newPosition;
	}
	inline Rectangle(float x, float y, float width, float height)
	{
		position.x = x;
		position.y = y;
		size.width = width;
		size.height = height;
	}
	inline ~Rectangle()
	{
		std::cout << "Destructor rectangle called" << std::endl;
	}

	Size size;
	Position position;

	double perimeter()
	{
		_perimeter = 2 * size.width + 2 * size.height;
		return _perimeter;
	}
	
	double surface()
	{
		_surface = size.width * size.height;
		return _surface;
	}

	double diagonal()
	{
		_diagonal = sqrt(size.width * size.width + size.height * size.height);
		return _diagonal;
	}
};

int main()
{
	Rectangle rectangle1 = Rectangle(2, 2, 2, 2);
	Rectangle rectangle2 = Rectangle(Position(2, 2), Size(2, 2));
	std::cout << rectangle1.perimeter() << " " << rectangle1.diagonal() << "\n";
	std::cout << rectangle2.surface() << " " << rectangle2.diagonal() << "\n";
	return 0;
}