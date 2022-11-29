#include <iostream>

int main()
{
    //WAŻNE: w C++ rozmiar tablicy MUSI być stały i znany na etapie kompilacji!
    
   int tab[10]; // tab[0] ... tab[9]
   std::cin >> tab[0] >> tab[1];
   
   for (int i = 2; i < 10; i+= 1)
   {
       std::cin >> tab[i];
   }
   
   for (int i = 0; i < 10; i += 1)
   {
       std::cout << "tab[" << i << "] = " << tab[i] << "\n";
   }
}
