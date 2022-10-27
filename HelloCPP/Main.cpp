#include <iostream> //	std::cout -> reserve for part of standard library (ship with standard compiler)
//#include "iostream"	//	std::cout -> reserve for libraries you create yourself or are importing

//include is the SAME as copying the iostream code into this file!
//pre processor looks at all the includes

int sum(int a, int b);


void main()
{

	std::cout << "Hello World!" << std::endl;
	int total = sum(2, 3);
	std::cout << total << std::endl;	
	return;
}

int sum(int a, int b)
{
	return a + b;
}