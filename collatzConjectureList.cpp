#include <iostream>

unsigned long long int count = 0;

unsigned long long int getValue()
{
	unsigned long long int x{};
	std::cout << "Enter a number: ";
	std::cin >> x;
	return x;
}

unsigned long long int updated(unsigned long long int num)
{
	if(num==1)
	{
		count++;
	}
	else if(num%2==0)
	{
		count++;
		updated(num/2);
	}
	else
	{
		count++;
		updated(num * 3 + 1);
	}

	return count;
}

int main()
{
	int max{};
	unsigned long long int n{9223372036854775807};
	// unsigned long long int seed{getValue()};

	for(unsigned long long int i=1; i<=n; i++)
	{
		count = updated(i);

		// std::cout << i << ": " << count <<'\n';
		if(count>max)
		{
			max=count;
			std::cout << i << ": " << count <<'\n';
		}
		count=0;
	}


	return 0;
}
