// przyjmij liczbę N i wypisz na ekran trójkąt o wysokości N, złożony ze znaków #
// Dla n=4:
//
// wersja łatwiejsza:
// #
// ##
// ###
// ####
//
// Wersja trudniejsza:
//    #
//   ###
//  #####
// #######

#include <iostream>

int main()
{
   int n = 0;
   int licznik = 0;
   
   std::cin >> n;
   licznik = n;
   
   for (licznik; licznik > 0; licznik -= 1)
   {
       for (int i = 0; i < n; i += 1)
       {
           std::cout << "#";
       }
       std::cout << "\n";
   }
    
    
}
