//Napisz program, który sprawdzi, czy czy podany rok jest rokiem przestępnym, czyli:
//podzielny przez 4 i niepodzielny przez 100
//lub
//podzielny przez 400

#include <iostream>

int main()
{
    int rok;
    
    std::cin >> rok;
    
    if (((rok %4 == 0) && (rok %100 != 0)) || (rok %400 == 0))
        std::cout << "Rok jest przestępny\n";
    else
        std::cout << "Rok NIE jest przestępny\n";

    
}
