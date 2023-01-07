#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

const int tabSize = 128;    // Rozmiar tablicy
const int randAdd = 128;    // Zakres liczb losowych (od [randMin] do [randMin + randAdd])
const int randMin = 1;      // Minimalna liczba losowa

// Wyszukiwanie binarne
int binSearch(int beg, int end, int x, int tab[])
{
    int pivot = (beg + end) / 2;
    if (beg > end)
        return -1;
    
    if (tab[pivot] == x)
        return pivot;

    if (tab[pivot] < x)
        return binSearch(pivot + 1, end, x, tab);
    else
        return binSearch(beg, pivot - 1, x, tab);
}

int main()
{
    srand(time(NULL));              // srand(time(NULL))
    int table[tabSize];             // tablica[rozmiarTablicy]
    int min = randMin + randAdd;    // ustawia minimum na najwyższą możliwą liczbę 
    int max = randMin;              // ustawia maximum na najniższą możliwą liczbę

    // Przypisuje każdemu miejscu tablicy losowy numer od (randMin) do (randMin + randAdd)
    for (int i = 0; i < tabSize; i++)
        table[i] = rand() % randAdd + randMin;

    // Sortuje tablicę
    sort(table, table + tabSize);

    // Szuka min i max
    for (int i = 0; i < tabSize; i++)
    {   
        // Szuka min
        if (table[i] < min)
            min = table[i];

        // Szuka max
        if (table[i] > max)
            max = table[i];
    }
    
    // Wypisuje każdy element tablicy
    for (int i = 0; i < tabSize; i++)
        cout << table[i] << '\t';


    // Wypisuje min i max
    cout << endl << "Min - " << min;
    cout << endl << "Max - " << max;
    
    return 0;
}