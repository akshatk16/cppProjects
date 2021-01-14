// generate list of perfect numbers. 5th is 33550336 and 6th out of int range
// included with perfectNumber.cpp so comment out main() there with two cout statements in factors()

#include <iostream>
#include "perfectNumber.cpp"

int main()
{
	int lim{getValue()};

	for(int i=1; i<=lim; i++)
	{
		int sum = factors(i);

		if(sum==i)
			std::cout << i << '\n';
	}

	return 0;
}
