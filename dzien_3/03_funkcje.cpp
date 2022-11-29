#include <iostream>

void hello()
{
    std::cout << "Hello!\n";
}

void argument(int a)
{
// wewnątrz tej funkcji zmienna 'a' jest już zdefiniowana
    std::cout << "Argument = " << a << "\n";
}

void dwa_argumenty(int a, int b)
{
    std::cout << "a = " << a << "\n";
    std::cout << "b = " << b << "\n";
}

int nastepnik(int x)
{
    return x + 1; //return zwraca wartość wyrażenia jako wynik funkcji i kończy jej działanie
}

//*********************************************************

int main()
{
    hello(); // wywołanie funkcji hello
    std::cout << "hej\n";
    hello();
    argument(10);
    argument(20);
    int x = 13;
    argument(x);
    dwa_argumenty(12, 34);
    
    int a = nastepnik(0);
    std::cout << a << "\n";
    
}
