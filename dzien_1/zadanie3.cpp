//Przyjmij liczbę i wypisz, czy ta liczba jest pzrzysta
#include <iostream>

int main()
{
    int a = 0;
    
    std::cout << "Podaj liczbę \n";
    std::cin >> a;
    
    if (a % 2 != 0)
    {
        std::cout << "Liczba jest nieparzysta\n";
    }
    else
    {
        std::cout << "Liczba jest parzysta\n";
    }

    
}
