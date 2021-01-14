// factorial using recursion

#include <iostream>

double getFact(int x)
{
	double fact{};

	if(x>1)
		return x * getFact(x-1);
	else
		return 1;
}

int main()
{
	int n{};

	std::cout << "Enter a number: ";
	std::cin >> n;

	std::cout << getFact(n) << '\n';

	return 0;
}
