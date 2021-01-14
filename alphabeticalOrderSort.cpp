#include <iostream>
#include <cstring>
#include <utility>

void selectionSort(std::string *arrayName, int count)
{
	for (int start = 0; start < count-1; ++start)
	{
		int smallest = start;

		for (int current = start + 1; current < count; ++current)
			{
				if(arrayName[current]<arrayName[smallest])
					smallest = current;
			}
		std::swap(arrayName[smallest], arrayName[start]);
	}

	std::cout << "\nSorted names are as follows:" << '\n';
	for (int i = 0; i < count; i++)
	{
		std::cout << "Name #" << i+1 << " is " << arrayName[i]<< '\n';
	}
	delete[] arrayName;
}
void callName(int n)
{
	std::string *arrayName = new std::string[n];
	for(int i=0; i<n; i++)
	{
		std::cout << "Enter name #" << i+1 << ": ";
		std::cin >> arrayName[i];
	}

	selectionSort(arrayName, n);
}
int main()
{
	std::cout << "Enter total number of names: ";
	int num{};
	std::cin >> num;

	callName(num);
	return 0;
}
