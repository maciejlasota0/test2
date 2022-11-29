#include <iostream>

int main()
{
    char znak = 'a';
    std::cout << znak << '\n';
    
    char c = 65;
    std::cout << c << '\n';
    
    std::cout << "sizeof(char) = " << sizeof(char) << '\n';
    
    std::cout << "napis\n";
    
    char tab[6] = {'a', 'b', 'c', 'd', 'e', 0}; // tablica z nullem na końcu jest wyświetlana poprawnie
    std::cout << tab << '\n';
    
    char tab1[6] = {'a', 'b', 'c', 'd', 'e', 'f'}; // tablica bez nulla na końcu - undefined behavior
    std::cout << tab1 << '\n';
    
    char tab2[] ="ABC"; // tablica jako string
    std::cout << tab2 << '\n';
    
}
