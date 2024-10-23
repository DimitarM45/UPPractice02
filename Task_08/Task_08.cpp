#include <iostream>

int main()
{
	int size;
	std::cin >> size;

	for (int row = 0; row < size; row++)
	{
		for (int col = 0; col < size; col++)
		{
			if (col == row)
			{
				std::cout << 0;
			}
			else if (col > row)
			{
				std::cout << '+';
			}
			else
			{
				std::cout << '-';
			}
		}

		std::cout << std::endl;	
	}
}