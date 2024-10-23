#include <iostream>

int main()
{
	int num;
	std::cin >> num;

	int factorialProduct = 1;

	for (size_t i = 2; i <= num; i++)
	{
		factorialProduct *= i;
	}

	std::cout << factorialProduct;
}