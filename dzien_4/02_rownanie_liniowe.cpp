// napisz fukcję, ktora zwroci informację, ile rozwiązań posiada równanie
// 0 = ax + b (dla nieskonczenie wielu, zwróć -1)
// Jeśli istnieje dokałdnie 1 rozwiązanie, gto wpisz je pod adres 'rozw'

#include <iostream>

int rownanie_liniowe(double a, double b, double* rozw)
{
    if (a == 0 && b == 0)
    {
        return -1;
    }
    else if (a == 0 && b != 0)
    {
        return 0;
    }
    else
    {
        *rozw = -b/a;
        return 1;
    }
    
}

int main()
{
    double wynik;
    
    rownanie_liniowe (0, 0, &wynik);
    std::cout << wynik << "\n";
    
    rownanie_liniowe (0, 1, &wynik);
    std::cout << wynik << "\n";
    
    rownanie_liniowe (2, 1, &wynik);
    std::cout << wynik << "\n";
    
    
}
