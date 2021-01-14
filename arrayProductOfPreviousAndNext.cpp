#include <iostream>

int arrayInput(int arr[], int n)
{
	std::cout << "Enter array elements" << '\n';

	for (int i=0; i<n; i++)
		std::cin >> arr[i];
	return arr[n];
}

void arrayUpdate(int arr[], int n)
{
	for(int i=1; i<n-1; i++)
	{
		std::cout << "\nThe updated array at iteration " << i
			    << " is" << '\n';

		arr[i] = arr[i-1]*arr[i+1];

		for (int i=0; i<n; i++)
			std::cout << arr[i] << '\t';

		std::cout << '\n';
	}
}


int main()
{
	int arr[100];

	std::cout << "Enter length of array: " << '\n';
	int n;
	std::cin >> n;
	arrayInput(arr, n);

	// print the array
	std::cout << "The entered array is: " << '\n';
	for (int i=0; i<n; i++)
		std::cout << arr[i] << '\t';
	std::cout << '\n';

	arrayUpdate(arr, n);

	return 0;
}
