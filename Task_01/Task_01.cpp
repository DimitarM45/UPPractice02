#include <iostream>

int main()
{
	int i, numOfElements;
	std::cin >> i;
	std::cin >> numOfElements;

	for (size_t j = 1; j <= numOfElements; j++)
	{
		std::cout << i * i + 3 * i << std::endl;

		i++;
	}
}