#include <iostream>

using namespace std;

// "Deklaracja" funkcji
int silnia(int x);            // Funkcja na silnię (jeden argument) 
int nwd(int x, int y);        // Funkcja na NWD (dwa argumenty)
float pwr(float x, int y);    // Funkcja na potęgę (dwa argumenty)

int main()
{
    float a = 4.0; // Wartość A
    float b = 6.0; // Wartość B

    cout << silnia(a) << endl;  // Wypisuje A!
    cout << silnia(b) << endl;  // Wypisuje B!
    cout << nwd(a, b) << endl;  // Wypisuje NWD(A, B)
    cout << pwr(a, b) << endl;  // Wypisuje A ^ B

    return 0;
}


// Funkcja silnii
int silnia(int x) // Wprowadza X
{
    int wynik = 1;
    int i = 1;

    while (i < x)
    {
        i++;
        wynik = wynik * i;
    }

    return wynik; // Zwraca wynik silnii
}


// Funkcja NWD                                                
int nwd(int x, int y) // Wprowadza X i Y
{
    while (x != y)
    {
        if (x > y)
            x = x - y;
        else 
            y = y - x;        
    }

    return x; // Zwraca NWD
}


// Funkcja potęgi
float pwr(float x, int y) // Wprowadza X i Y
{
    float wynik = 1;

    while (y > 0)
    {
        wynik = wynik * x;
        y--;
    }

    return wynik; // Zwraca wynik potęgowania
}

// I use arch btw