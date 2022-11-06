//Przyjmij liczbę i wypisz czy znajduje się ona w przedziale [10;20)

#include <iostream>

int main()
{
    int x;
    std::cin >> x;
    
    if (x >= 10)
    {
        if (x <20)
            std::cout << "x należy do przedziału [10;20)\n";
        else
        {
            std::cout << "x NIE należy do przedziału [10;20)\n";   
        }
    }
    else
    {
        std::cout << "x NIE należy do przedziału [10;20)\n";
    }
    
    
}
