#include <iostream>

int main()
{
	int array[] = { 1,11,111,1111,11111 };
	int *pointerToArray = array;
	printf("Array value %d, pointerToArrayValue %d", array[3], pointerToArray[3]);
	return 0;
}