//prints primes upto n

#include <iostream>
#include <cmath>

int main()
{
  int i{2}, n{}, j{2}, count{0};

  std::cout << "Enter a number: ";
  std::cin >> n;

  while(j<=n)
  {
    for(i=2; i<=j; i++)
    {
      if(j%i==0)
        break;
    }
    if(i==j)
    {
      std::cout << j << '\n';
      count++;
    }
    j++;
  }
  //total primes less than n
  std::cout << "\nTotal " << count << '\n';

  //approximation of primes less than n
  std::cout << n/log(n)<<'\n';

  //error in approximation
  std::cout << (count-(n/log(n)))/count*100;

  return 0;
}
