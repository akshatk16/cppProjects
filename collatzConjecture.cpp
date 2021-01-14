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
		std::cout << "1" << '\n';
		count++;
	}
	else if(num%2==0)
	{
		std::cout << num << '\n';
		count++;
		updated(num/2);
	}
	else
	{
		std::cout << num << '\n';
		count++;
		updated(num * 3 + 1);
	}

	return count;
}

int main()
{
	unsigned long long int seed{getValue()};
	unsigned long long int count = updated(seed);

	std::cout << "Total iterations: " << count;
	return 0;
}
