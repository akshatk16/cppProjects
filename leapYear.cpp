//check if a year is leap year

#include <iostream>

int main()
{
    int year;

    std::cout<<"Enter a year: ";
    std::cin>>year;

    if(year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
        std::cout << "Leap year";
    else
          std::cout << "Not leap year" << '\n';
    return 0;
}
