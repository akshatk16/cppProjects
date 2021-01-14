// calculate highest comon factor
// used with lcm.cpp so comment out main() here to find lcm

#include <iostream>

int getValue()
{
	int x{};
	std::cout << "Enter a number: ";
	std::cin >> x;
	return x;
}

int getHCF(int high, int low)
{
	if(low==0)
		return high;
	return getHCF(low, (high%low));
}

int main()
{
	int high{getValue()};
	int low{getValue()};
	int t{};

// ensuring high>more
	if(high<low)
	{
		t 	= high;
		high 	= low;
		low 	= t;
	}

	std::cout << getHCF(high, low);

	return 0;
}
