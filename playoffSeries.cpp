#include <iostream>
#include <utility>

void sorted(int *arr, int);
void altSorted(int*, int);

int main()
{
	int arr[] {6,1,3,2,5,4,7,8};
	int num = sizeof(arr)/sizeof(arr[0]);
	// std::cout << num << '\n';
	std::cout << "Current array is:" << '\n';
	for(int i=0; i<num; i++)
		std::cout << arr[i] << '\t';

	sorted(arr, num);
	// altSorted(arr, num);

	std::cout << "\nThe sorted array is:" << '\n';
	for(int i=0; i<num; i++)
		std::cout << arr[i] << '\t';

	return 0;
}

void sorted(int *arr, int num)
{
	for(int i=0; i<num; i++)
	{
		int j = i;
		for(int k = 0; k<num; k++)
		{
			if(arr[j]>arr[k])
				j=k;

			std::swap(arr[i], arr[j]);
		}
	}

	altSorted(arr,num);
}

void altSorted(int *arr, int num)
{
	int temp[num];
	bool next {true};
	int low{}, high{num-1};

	for(int i=0; i<num; i++)
	{
		if(next)
			temp[i] = arr[low++];
		else
			temp[i] = arr[high--];
		next = !next;
	}
	for(int i=0; i<num; i++)
		arr[i]=temp[i];
}
