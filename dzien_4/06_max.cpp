//Napisz funkcję, która przyjmie tablicę intów (i jej rozmiar) i zwróci największy elemeny z tej tablicy

#include <iostream>

int max(int* adres, int rozmiar)
{
    int maximum = adres[0];
    for (int i = 1; i < rozmiar; i += 1)
    {
        if (adres[i] > maximum)
        {
            maximum = adres[i];
        }
    }
    return maximum;
}

int main()
{
    const int ROZMIAR = 5;
    int tab[ROZMIAR] = {1, 2, 8, 4 ,5};
    
    std::cout << max (tab, ROZMIAR) << "\n";
    
}
