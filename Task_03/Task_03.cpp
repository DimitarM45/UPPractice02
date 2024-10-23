#include <iostream>

int main()
{
	unsigned int num;
	std::cin >> num;
	
	if (num == 0)
	{
		std::cout << 0;
		
		return 0;
	}

	int firstElement = 0;
	int secondElement = 1;

	int numPositionFibonacci = secondElement;

	for (int i = 3; i <= num; i++)
	{
		numPositionFibonacci = firstElement + secondElement;

		firstElement = secondElement;
		secondElement = numPositionFibonacci;
	}

	std::cout << numPositionFibonacci;
}