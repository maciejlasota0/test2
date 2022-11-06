// inicjalizacja jest wykonywana raz przed rozpoczęciem pętli, a następnie:
// 1. sprawdzana jest prawdziwość warunku
// 2. jeśli warunek jest fałszywy to koniec pętli
// 3. wykonywana jest zawartość pętli
// 4. wykonywana jest zmiana licznika
// 5. wróc do pkt.1

#include <iostream>

int main()
{
    for (int i = 0; i < 5; i += 1)
    {
        std::cout << "lol\n";
    }
    
}
