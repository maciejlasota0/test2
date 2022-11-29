#include <iostream>

int main()
{
    const int stala = 17;
    int zmienna = 14;
    
    int* wsk = &zmienna;
    
    const int* c_wsk = &zmienna; // wskaźnik na const - nie pozwala na modyfikację wartości pod przechowywanym adresem. Możemy nim tylko podglądać zmienne pod różnymi adresami
    
    int* const wsk_c = &zmienna; // wskaźnik jest stały i od momentu utworzenia nie możemy go zmienić; jednak możemy go użyć do modyfikacji zmiennej, na któą wskazuje
    
    const int* const cwc = &zmienna; // nie możemy zmienić wskażnika, ani wartości na którą wskazuje
    
    
}
