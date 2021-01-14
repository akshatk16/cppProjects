// Area of triangle using Heron's formula

#include <iostream>
#include <cmath>

float getSide()
{
	float a{};
	std::cout << "Enter length: ";
	std::cin >> a;

	return a;
}

void area(float x, float y, float z)
{
	float s{(x + y + z)/2};

	float area = std::sqrt(s*(s-x)*(s-y)*(s-z));
	std::cout << area << '\n';
}

int main()
{
	float x{getSide()};
	float y{getSide()};
	float z{getSide()};

	area(x, y, z);
	return 0;
}
