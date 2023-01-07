#include <iostream>
#include <cstdlib>
#include <time.h>
#include <algorithm>

using namespace std;

const int tabSize = 15; // Określa rozmiar tablicy

int main()
{      
    srand(time(NULL));

    // Zmienne
    int tab [tabSize];  // Zmienna tablicy
    int x = 0;          // Nieużywana zmienna
    int n = 0;          // Zmienna zakresu DO

    cin >> n;           // Wprowadza n

    // Wpisuje w tablicę liczby od 1 do n
    for (int i = 0; i < tabSize; i++)
    {
        tab [i] = rand() % n + 1;
    }

    // Wypisuje całą tablicę
    for (int i = 0; i < tabSize; i++)
    {
        cout << tab [i] << endl;
    }

    // Sortuje tablicę
    cout << endl;
    sort(tab, tab + tabSize);   // tabSize jest potrzebny, bo tak

    // Wypisuje ponownie tablicę, tym razem posortowaną
    for (int i = 0; i < tabSize; i++)
        {
            cout << tab [i] << endl;
        }

    return 0;
}
