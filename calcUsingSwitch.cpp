#include <iostream>

double getValue()
{
	double x{};
	std::cout << "Enter a number: ";
	std::cin >> x;
	return x;
}

void calculate(double, double, char);

int main()
{
	double x{getValue()};
	double y{getValue()};
	char op;
	std::cout << "Enter operator: ";
	std::cin >> op;

	calculate(x,y,op);

	return 0;
}

void calculate(double x, double y, char a)
{
	switch(a)
	{
		case '+':
		{
			std::cout << x+y;
			break;
		}
		case '-':
		{
			std::cout << x-y;
			break;
		}
		case '*':
		{
			std::cout << x*y;
			break;
		}
		case '/':
		{
			std::cout << x/y;
			break;
		}
		default:
			std::cout << "UNKNOWN OPERATOR";
	}
}
