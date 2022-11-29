//Napisz funkcję, która sprawdzi, czy podany napis składa się tylko z małych liter.
//Jeśli tak, to ma zwrócić 'true', a jeśli nie to 'false'

#include <iostream>

int check_string(char* adres_tekstu)
{
    char* licznik = adres_tekstu;
    while (*adres_tekstu != 0)
    {
        licznik += 1;
        std::cout << licznik << "\n";
        if (*licznik < 'a' || *licznik > 'z')
            return 0;
    }
    return 1;
}


int main()
{
    char tab[] = "AtyUtyuKKcje";
    std::cout << check_string << "\n";
    
}
