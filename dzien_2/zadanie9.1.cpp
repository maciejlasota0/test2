// przyjmij liczbę N, a następnie przyjmij N liczb i wypisz największą z nich
// 5
// 2 1 4 1 1
// Wynik: 4

#include <iostream>

int main()
{
    int N = 0;
    int n = 0;
    int max = 0;
    
    std::cout << "Podaj ilość liczb\n";
    std::cin >> N;
    
    std::cout << "Podaj liczbę\n";
    std::cin >> n;
    max = n;
    
    for (N; N > 1; N -= 1)
    {
        std::cout << "Podaj liczbę\n";
        std::cin >> n;
        if (n > max)
            max = n;
    }
    std::cout << "Największa liczba to " << max << "\n";
}
