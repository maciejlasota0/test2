//oblicz sumę z podanych przez użytkownika liczb
//przyjmuj liczby, dopóki użytkownik nie poda 0
// 1 2 3 4 5 0
//wynik: 15

#include <iostream>

int main()
{

    
    int suma = 0;

    while (true)
    {
        int x = 0;
        std::cin >> x;
        if (x == 0)
            break; 
        suma = suma + x;
    }
    std::cout << "Suma: " << suma << "\n";
    // std::cout << x << "\n"; // to się nie skompiluje, bo zmienna x zakończyła życie gdy skończyła się pętla {}
}
