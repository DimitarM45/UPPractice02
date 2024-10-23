#include <iostream>

int main()
{
	int number, power;
	std::cin >> number;
	std::cin >> power;

	int result = 1;

	for (int i = 0; i < power; i++)
	{
		result *= number;
	}

	std::cout << result;
}