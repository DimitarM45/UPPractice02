#include <iostream>

int main()
{
	const short startPosition = 65;
	const short endPosition = 90;

	for (int i = startPosition; i <= endPosition; i++)
	{
		char letter = i;

		if (letter == 'A' || letter == 'E' || letter == 'I' ||
			letter == 'O' || letter == 'U')
		{
			continue;
		}

		std::cout << (char)i << std::endl;
	}
}