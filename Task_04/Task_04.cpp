#include <iostream>

int main()
{
	int number = 1;
	int sum = 0;

	while (number != 0)
	{
		std::cin >> number;

		sum += number;
	}
	
	std::cout << sum;
}