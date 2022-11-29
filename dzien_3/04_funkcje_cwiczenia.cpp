//1. napisz funkcje bezwzgledna(int x), która zwróci watość bezwzględną z arumentu x
// bezwzgledna(5) == 5
// bezwzgledna (-3) == 3

//2. Napisz funcję maks(int a, int b), która zwróci większy spośród argumentów
// maks(5, 3) == 5
// maks(3, 5) == 5
// maks(5, 5) == 5

#include <iostream>

int bezwzgledna(int a)
{
    if(a < 0)
        a = -a;
    return a;
}

int maks(int a, int b)
{
    if(a > b)
        return a;
    return b;
}

//**************************************************

int main()
{
    int x = 0; 
    int y = 0;
    
    std::cout << "Podaj liczbę a\n";
    std::cin >> x;
    std::cout << bezwzgledna(x) << "\n";
    
    std::cout << "Podaj liczby a i b\n";
    std::cin >> x >> y;
    
    std::cout << maks(x, y) << "\n";
    
}
