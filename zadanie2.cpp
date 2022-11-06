// Przyjmij 3 liczby: a, b i c, gdzie:
// a i b oznaczają odpowiednio godzinę i minutę wyświetlaną obecnie na zegarze 
// elektronicznym 
// Wypisz godzinę i minutę, jaka będzie wyświetlona na zegarze po upływie c minut
// Przykładowo , dla danych 16 57 5, powinno zostać wyświetlone 17 2

#include <iostream>
int main ()
{
    int godzina = 0;
    int minuta = 0;
    int increment = 0;
    int temp = 0;
    
    std::cin >> godzina >> minuta >> increment;
    
    temp = minuta + increment;
    
    minuta = (minuta + increment) % 60;
    godzina = (godzina + (temp / 60)) % 24;
    
    std::cout << godzina << " : " << minuta << "\n";
    
}
