// find LCM using HCF
// comment out main() in HCF.cpp to find LCM

#include <iostream>
#include "HCF.cpp"

int main()
{
	int a{getValue()};
	int b{getValue()};

	int LCM{(a*b)/getHCF(a,b)};
	std::cout << LCM << '\n';


	return 0;
}
