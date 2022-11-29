//Napisz funkję, która przyjmie 2 tablice i zwróci informację, czy zawierają takie same elementy w takiej samej kolejności (czy są równe)

#include <iostream>

bool tab_compare(const int* tab1, int tab1_length, const int* tab2, int tab2_length)
{
    if (tab2_length != tab1_length)
    {
        return 1; // mają różne długości, więc na pewno nie są jednakowe
    }
    
    for (int i = 0; i < tab1_length; i += 1)
    {
        if (tab1[i] != tab2[i])
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int tab1[] = {1, 2, 3, 4};
    
    int tab2[] = {1, 2, 3, 4};
    
    std::cout << tab_compare(tab1, 4, tab2, 4) << "\n";
}
