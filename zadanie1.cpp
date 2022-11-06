#include <iostream>

// 1. Przyjmij liczbę całkowitą i wypisz:
// - jej resztę z dzielenia przez 3
// - wynik podniesienia tej liczy do kwadratu
// - cyfrę jedności tej liczby
// - cyfrę dziesiątek tej liczby

int main()
{
    int a = 0;
    std::cin >> a;
    
    std::cout << "Reszta z dzielenia przez 3 = " << a % 3 << "\n";
    std::cout << "Podniesienie do kwadratu = " << a * a << "\n";
    std::cout << "Cyfra jednosci = " << a % 10 << "\n";
    std::cout << "Cyfra dziesiatek = " << a / 10 % 10 << "\n";
    
}
