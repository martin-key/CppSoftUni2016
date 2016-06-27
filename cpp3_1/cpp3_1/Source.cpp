#include <iostream>

int main()
{
	int variable = 5;
	printf("%d, with adress %p\n", variable, &variable);
	int * pointerToVariable = &variable;
	printf("%d, pointing to adress %p\n", *pointerToVariable, pointerToVariable);
	return 0;
}