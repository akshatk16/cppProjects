// check for perfect number
// used in perfectNumberList.cpp so comment out main and two cout statements in factors() for use

#include <iostream>

int getValue()
{
	int x{};
	std::cout << "Enter a number: ";
	std::cin >> x;
	return x;
}
//add factors of given number
int factors(int num)
{
	int sum{};
	std::cout << "\n\nThe factors of " << num << " are" << '\n';
	for(int i=1; i<=num/2; i++)
	{
		if(num%i==0)
		{
			std::cout << i << '\n';
			sum+=i;
		}
	}

	return sum;
}

// driver code
int main()
{
	int num{getValue()};
	int sum{factors(num)};

	std::cout << "\nThe sum of factors of " << num << " is " << sum << '\n' << '\n';

	if(sum==num)
		std::cout << num << " is a perfect number" << '\n';
	else
		std::cout << num << " is  NOT a perfect number" << '\n';


	return 0;
}
