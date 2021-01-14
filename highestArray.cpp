// find 3 highest in input array

#include <iostream>

void highest(int arr[], int n)
{
	int i{}, third{}, first{}, second{};

	for(i=0; i<n; i++)
	{
		if(arr[i]>first)
		{
			third		= second;
			second	= first;
			first		= arr[i];
		}
		else if(arr[i]>second)
		{
			third		= second;
			second	= arr[i];
		}
		else if(arr[i]>third)
			third		= arr[i];
	}
	std::cout << first << '\n'<< second << '\n'<< third << '\n';

}

int main()
{
	int n{5};
	int arr[n];
	int high[3];
	int i{};
	int j{};

	//create array
	std::cout << "Enter terms for array" << '\n';
	for(i=0; i<n; i++)
		std::cin >> arr[i];

	//find highest
	highest(arr, n);

return 0;
}
