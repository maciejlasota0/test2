/*. Napisz funkcje
	int rownanie_kwadratowe(double a, double b, double c, double* rozw1, double* rozw2)
ktora zwroci informacje ile rozwiazan ma rownanie postaci
	0 = a * x^2 + b * x + c
Jesli rozwiazan jest 1 lub 2 to powinny one zostac zapisane pod adresami rozw1 i rozw2 (analogicznie do przerabianej na zajeciach funkcji rownanie_liniowe).
Do policzenia pierwiastka sluzy funkcja std::sqrt() dostepna w naglowku <cmath>.*/

#include <iostream>
#include <cmath>

int rownanie_kwadratowe(double a, double b, double c, double* rozw1, double* rozw2)
{
    double delta = 0;
    double r1 = 0;
    double r2 = 0;
    
    delta = (b * b) - (4 * a * c);
    
    if (delta < 0)
    {
//          *rozw1 = 0;
//          *rozw2 = 0;
        return 0;
    }
    
    if (delta == 0)
    {
        r1 = - (b / (2 * a));
        *rozw1 = r1;
        *rozw2 = r1;
        
        return 1;
    }
    
    r1 = (-b - std::sqrt(delta)) / (2 * a);    
    r2 = (-b + std::sqrt(delta)) / (2 * a);
    *rozw1 = r1;
    *rozw2 = r2;
    return 2;
}

int main()
{
    double a = 0;
    double b = 0;
    double c = 0;
    
    double rozw1;
    double rozw2;
    
    int ilosc_rozw;
    
    
    std::cout << "Podaj a, b i c\n";
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    
    ilosc_rozw = rownanie_kwadratowe(a, b, c, &rozw1, &rozw2);
    
    std::cout << "Równanie ma "<< ilosc_rozw << " rozwiazan\n";
    std::cout << "Rozwiazanie 1 = " << rozw1 << "\n";
    std::cout << "Rozwiazanie 2 = " << rozw2 << "\n";
    
}
