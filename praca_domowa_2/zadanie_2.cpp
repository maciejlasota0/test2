// Napisz program, który przyjmie 10 liczb całkowitych i wypisze z nich najpierw parzyste, a potem nieparzyste.

#include <iostream>

int main()
{
#define ROZMIAR 10
    
    int tab[ROZMIAR];
    
    
    for(int i = 0; i < ROZMIAR; i += 1)
    {
        std::cin >> tab[i];
        
    }
    
      for(int i = 0; i < ROZMIAR; i += 1)
    {
        int a = tab[i];
        if (a %2 == 0)
        {
            std::cout << a << ", "; 
        }
    }
    std::cout << "\n";
    
      for(int i = 0; i < ROZMIAR; i += 1)
    {
        int a = tab[i];
        if (a %2 != 0)
        {
            std::cout << a << ", "; 
        }
    }
    std::cout << "\n";
    
    
}
