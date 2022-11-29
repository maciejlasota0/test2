//Napisz fukcję, która policzy silnię z liczby n
// n! = 1 * 2 * 3 * ... * n

//Równoważna definicja:
// 0! = 1
// n! = n * (n - 1)!

#include <iostream>

int silnia(int n)
{
    int wynik = 1;
    for(int licznik = 1; licznik <= n; licznik+=1)
    {
        wynik = wynik * licznik;
    }
    return wynik;
}

int main()
{
    std::cout << silnia(6);
    
}
