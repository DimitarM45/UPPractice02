#include <iostream>

int main()
{
	int number;
	std::cin >> number;

	int digitSum = 0;

	while (number > 0)
	{
		digitSum += number % 10;

		number /= 10;
	}

	std::cout << digitSum;
}