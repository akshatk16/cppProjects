//prunsigned long long ints unsigned long long integers whose nth power has more digits than the one before it

#include <iostream>
#include <cmath>

 unsigned long long int digits(unsigned long long int x)
{
  unsigned long long int lenNew{0};

  //calculate length of current iteration
  while(x>0)
  {
    x=x/10;
    lenNew++;
  }

  return lenNew;
}


int main()
{
  unsigned long long int a{};
	unsigned long long int count{0};

  for(a=1; a<10000; a++)
  {
	unsigned long long int exp{};
	exp=std::pow(a,2);
    	unsigned long long int len{digits(exp)};


		if(len!=count)
		{
			std::cout << a << " : " << exp << " : " << len <<'\n';
			count++;
		}

  }

  return 0;
}
