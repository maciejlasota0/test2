#include <iostream>

// z C/C++ argumebty przekazywane są przez kopię (pass by copy)
// to oznacza, że każdy argument do funkcji jest kopiowany na jej potrzeby

void f(int x)
{
    x = 20;
}

// do funkcji 'g' jest przekazywana kopia jakiegoś ADRESU inta
// ADRES pozwala nam na modyfikację wartości, na którą wskazuje
void g(int* b)
{
    *b = 30; // przyjmuje ADRES przekazanej zmiennej i pod ten adres wpisuje 30
}

void dajWspolrzedne(double* x, double* y)
{
    *x = 44.575;
    *y = 13.654;
}

int main()
{
    int x = 10;
    f(x); // wartość 'x' jest kopiowana do argumentu 'x' w funkcji 'f'
    std::cout << x << "\n"; // zostanie wyświetlone 10, ponieważ funkcja f(x) pracuje na KOPII zmiennej 'x' tworzonej wewnątrz tej funkcji.
    
    g(&x); // do funkcji 'g' przekazujemy ADRES zmiennej 'x'
    std::cout << x << "\n"; // zostanie wyświetlone 30, ponieważ funkcja g(x) pracuje na ADRESIE zmiennej 'x'
    
    double a = 0.0;
    double b = 0.0;
    
    std::cout << a << "\n";
    std::cout << b << "\n";
    
    
    dajWspolrzedne(&a, &b);
    std::cout << a << "\n";
    std::cout << b << "\n";
    
    
}
