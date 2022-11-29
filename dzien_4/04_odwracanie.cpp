// Napisz program, który przyjmie od uzytkownika 10 liczb i wypisze je w odwrotnej kolejności

#include <iostream>

int main()
{
    const int ROZMIAR = 10;
    
    int tab[ROZMIAR];
    
    std::cout << "Podaj 10 liczb\n";
    
    for (int i = 0; i < ROZMIAR; i += 1)
    {
        std::cin >> tab[i];
    }
    
     for (int i = ROZMIAR-1; i >= 0; i -= 1)
    {
        std::cout << tab[i] << "\n";
    }
    
}
