#include <iostream>

int main()
{
	const int length(9);
	int array[length] = { 5, 7, 2, 9, 3, 1, 6, 4, 8 };

	for(int iterations=0; iterations<length-1; iterations++)
	{
		int endOfArray = length - iterations;
		bool swapped {false};

		for(int current=0; current<endOfArray-1; current++)
		{
			if(array[current]>array[current+1])
			{
				std::swap(array[current], array[current+1]);
				swapped = true;
			}
		}
		if(!swapped)
		{
			std::cout << "Early Termination on iteration " << iterations+1 << '\n';
			break;
		}
	}
	for(int i=0; i<length; i++)
		std::cout << array[i] << '\t';
	return 0;
}
