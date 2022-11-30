// Napisz funkcję srednia(), która przyjmie jako argumenty tablicę liczb całkowitych i jej rozmiar, po czym zwróci średnią arytmetyczną elementów w tej tablicy

#include <iostream>

double srednia(int* adr_tab, int length)
{
    double sum = 0;
    
    for(int i = 0; i < length; i += 1)
    {
        sum = sum + adr_tab[i];
    }
    
    return (sum / length);
}

int main()

{
    int rozmiar;
    
    std::cout << "Podaj ilosc liczb\n";
    std::cin >> rozmiar;
    int tab[rozmiar];
    
    std::cout << "Podaj " << rozmiar << " liczb(y)\n";
    for(int i = 0; i < rozmiar; i += 1)
    {
        std::cin >> tab[i];
        
    }
    
    std::cout << "srednia = " << srednia(tab, rozmiar) << "\n";
    
}
