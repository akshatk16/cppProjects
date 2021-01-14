// prints no. of instances of each digit in a number

#include <iostream>
#include <cmath>

int getValue()
{
	int x{};
	std::cout << "Enter a number: ";
	std::cin >> x;
	return x;
}

int freq(int num, int x)
{
	int count{};
	int i{};
	for(i=num; i>0; i=i/10)
	{
		if(i % 10==x)
			count++;
	}
	return count;
}
int main()
{
	int num{getValue()}, i{};

	for(i=0; i<10; i++)
	{
		std::cout <<"The frequency of " << i << " is " << freq(num, i) << '\n';
	}

	return 0;
}
