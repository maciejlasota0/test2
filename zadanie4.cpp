//Przyjmij liczbę i wypisz, czy jest >0, <0 czy równa 0.
#include <iostream>

int main()
{
    int x;
    
    std::cin >> x;
    
    if (x > 0)
    {
        std::cout << "x jest > 0";
    }
    else if (x < 0)
    {
        std::cout << "x jest < 0";
    }
    else
        std::cout << "x jest = 0";
}
