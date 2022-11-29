// Napisz funkcję suma_dzielnikow(), która policzy sume dzielnikow podanego argumentu mniejszych od niego samego.

// suma_dzielnikow(8) == 7 // 1 + 2 + 4

#include <iostream>

int suma_dzielnikow(int a)
{
    int suma = 0;
//    int dzielnik = 1;
    for (int dzielnik = 1; dzielnik < a; dzielnik+=1)
    {
        if ((a % dzielnik) == 0)
        {
            suma = suma + dzielnik;
        }
    }
    return suma;
}

int main()
{
    
    std::cout << suma_dzielnikow(24) << "\n";
    
    
}
