// chooses random number and takes inputs till guessed correctly
#include <iostream>
#include <cstdlib>
#include <ctime>

int getValue()
{
	int x{};
	std::cout << "Enter a number: ";
	std::cin >> x;
	return x;
}

int main()
{
	int count{1};
  	std::srand(std::time(nullptr));
  	int choose{std::rand()*1000/RAND_MAX};
	int flag{0};

	while(flag!=1)
	{
		int input(getValue());

		if(input>choose)
			std::cout << "Too high: " << count++ <<'\n';
		else if(input<choose)
			std::cout << "Too low: " << count++ << '\n';
		else
		{
			std::cout << "Correct: " << count++ << '\n';
			flag=1;
		}
	}

    	return 0;
}
