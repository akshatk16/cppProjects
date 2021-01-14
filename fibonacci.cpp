// fibonacci using recursion

#include <iostream>
#include <iomanip>

unsigned int getFib(int x)
{
	if(x==0||x==1)
		return x;
	else
		return getFib(x-1)+getFib(x-2);
}


int main()
{
	std::cout << "Enter a limit: ";
	int lim;
	float ratio;
	float b{1}, a{1};
	int i=0;
	std::cin >> lim;

	for(i=1; i<=lim; i++)
	{
		b=a;
		a=getFib(i);
		std::cout << i << ":" << std::fixed << std::setprecision(0)<< a << '\t' << '\t';
		ratio = a/b;
		std::cout << std::fixed << std::setprecision(15)<< ratio << '\n';
	}


	return 0;
}
