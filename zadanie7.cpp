//przyjmij liczbę z dowolną ilością cyfr i wypisz sumę jej cyfr
#include <iostream>

int main()
{
    int x = 0;
    int suma = 0;
    
    std::cin >> x;
    
    while (x > 0)
    {
        
        suma += x % 10; // dodajemy ostatnią cyfrę liczby do sumy
        x /= 10; // usuwamy ostatnią cyfrę z liczby
    }
    std::cout << suma << "\n";
    
}
