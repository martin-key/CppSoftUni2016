#include <iostream>

class Chair
{
public:
	Chair() { this->numberOfLegs = 0; };
	int numberOfLegs;
	unsigned char color[3];
};


int main()
{
	Chair aChair;
	aChair.numberOfLegs = 4;
	aChair.color[0] = 182;
	aChair.color[1] = 0x0F;
	aChair.color[2] = 0xDD;

	Chair * pointerToChair = &aChair;
	pointerToChair->color[0] = 120;
	std::cout << (int)pointerToChair->color[0] << std::endl;
	std::cout << (int)aChair.color[0] << std::endl;

	Chair Fiki;
	Fiki.numberOfLegs = 0;
	Fiki.color[0] = 0xFF;
	Fiki.color[1] = 0xFF;
	Fiki.color[2] = 0x00;

	pointerToChair = &Fiki;
	std::cout << (int)pointerToChair->color[0] << std::endl;
	std::cout << (int)Fiki.color[0] << std::endl;

	
	return 0;
}

