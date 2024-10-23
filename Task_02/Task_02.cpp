#include <iostream>

int main()
{
	int numsCount;
	std::cin >> numsCount;

	int number;
	int largestNegativeNum = 0;
	int currLargestNegativeNum = 0;

	for (size_t i = 0; i < numsCount; i++)
	{
		std::cin >> number; 

		if (number < 0 && largestNegativeNum == 0)
		{
			largestNegativeNum = number;
			currLargestNegativeNum = number;
		}
		else if (number < 0)
		{
			currLargestNegativeNum = number;
		}

		if (currLargestNegativeNum > largestNegativeNum)
		{
			largestNegativeNum = currLargestNegativeNum;
		}
	}

	if (largestNegativeNum == 0)
	{
		std::cout << "No largest negative number exists!";

		return 0;
	}

	std::cout << largestNegativeNum;
}