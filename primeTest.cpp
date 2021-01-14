//test a number for primality

#include <iostream>

int main()
{
  int x, y,n,i;

  std::cout << "Enter a number: ";
  std::cin >> n;

  for(i=2; i<=n; i++)
  {
    if(n%i==0)
    {
      break;
    }
  }
  if(i==n)
    std::cout << "Prime";
  else
    std::cout << "Not Prime" << '\n';
  return 0;
}
