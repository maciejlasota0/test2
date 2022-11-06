// przyjmij liczbę N i wypisz wiersz złożony z N znaków #
// dla N = 6 wypisujemy
// ######

#include <iostream>

int main()
{
    int x = 0;
    
    std::cin >> x;
    
    while (x > 0)
    {
        std::cout << "#";
        x -= 1;
    }
    
    std::cout << "\n";
    
}
