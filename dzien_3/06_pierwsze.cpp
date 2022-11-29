// Napisz funkcję czy_pierwsza(), która sprawdzi, czy podany argument jest liczba pierwszą.

#include <iostream>

bool czy_pierwsza(int x)
{
    if (x == 1)
        return 0;
    
    int dzielnik = x-1;
    while (dzielnik > 1)
    {
        if (x % dzielnik == 0)
            return 0;
        dzielnik -= 1;
    }
    return 1;
}

int main()
{
    int x;
    
   std::cout << "Podaj liczbę\n";
   std::cin >> x;
   std::cout << czy_pierwsza(x) << "\n";
    
//    x = czy_pierwsza(1000000007);
    
    
}
