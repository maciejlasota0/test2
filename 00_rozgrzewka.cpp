//przyjmij 3 liczby i wypisz największą z nich

#include <iostream>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    
    std::cin >> a >> b >> c;
    if ((a >= b) && (a >= c))
    {
        std::cout << "Największą liczbą jest " << a << "\n"; 
    }
    else if ((b >= a) && (b >= c))
    {
        std::cout << "Największą liczbą jest " << b << "\n"; 
    }
    else
    {
        std::cout << "Największą liczbą jest " << c << "\n";
    }
    
}
