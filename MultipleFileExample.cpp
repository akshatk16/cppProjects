// Call other file

#include <iostream>
#include "multipleFileExample1.cpp"

int main()
{
	std::cout << "main" << '\n';
	add();
	std::cout << "exiting" << '\n';
  	return 0;
}
