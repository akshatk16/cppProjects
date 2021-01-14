#include <iostream>
#include <utility>


int main()
{
	int arr[] { 141,35,63,625,41,415,15,246,65,144,151,55,14 };
	const int length = sizeof(arr)/sizeof(arr[0]);
	int i{};

	for (i=0; i<length; i++)
	{
		int j	= i;

		for (int k=i; k<length; k++)
		{
			if(arr[k]>arr[j])
				j=k;

		}
		std::swap(arr[i],arr[j]);

	}

	for(i=0; i<length;i++)
		std::cout << arr[i] << '\n';
	return 0;
}
