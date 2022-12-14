// Napisz program, który przyjmie od uzytkownika 10 liczb i wypisze je w odwrotnej kolejności

#include <iostream>

void wypisz_tablice(int* tab, int n)
{
    std::cout << "[";
    for (int i = 0; i < n; i += 1)
    {
        if (i > 0)
            std::cout << ", ";
        std::cout << tab[i];
    }
    std::cout << "]";
}

int main()
{
    int tab[5] = {10, 20, 30, 40, 50};
    
    std::cout << tab << "\n";// nazwa tablicy rerezentowana jako jej adres
    std::cout << &tab[0] << "\n";// wyświetlenie adresu zerowego elementu 
    std::cout << &tab[1] << "\n";// wyświetlenie adresu pierwszego elementu 
    std::cout << tab + 1 << "\n";// nazwa tablicy rerezentowana jako jej adres + 1
    
    std::cout << tab[2] << "\n";
    std::cout << *(tab + 2) << "\n";
    
    wypisz_tablice(tab, 5); // podajemy samo 'tab', ponieważ nazwa tablicy jest interpretowana jako jej adres
    
}
