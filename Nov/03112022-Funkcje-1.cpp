#include <iostream>
using namespace std;

const int x = 2; // Const int x
const int y = 3; // Const int Y
const int z = 4; // Const int Z

int Suma1(int a, int b);
void Suma2(int a, int b);
int Suma3(void);
void Suma4(void);

int main()
{
    
    int a;
    int b;
    cin >> a;
    cin >> b;

    cout << "A - " << a << endl;
    cout << "B - " << b << endl;
    cout << "X - " << x << endl;
    cout << "Y - " << y << endl;
    cout << "Z - " << z << endl;
    cout << endl;

    cout << "Suma 1" << endl;                // int a + int b    - Zwraca wynik dodawania
    cout << Suma1(a, b) << endl << endl;

    cout << "Suma 2" << endl;                // int a + int b    - Nie zwraca wyniku dodawania
    Suma2(a, b) ;
    cout << endl << endl;

    cout << "Suma 3" << endl;                // int x + int y    - Zwraca wynik dodawania
    cout << Suma3() << endl << endl;

    cout << "Suma 4" << endl;               // int x + int y    - Nie zwraca wyniku dodawania
    Suma4();
    cout << endl << endl;

    return 0;
}

int Suma1(int a, int b)
{
    return a + b;
}

void Suma2(int a, int b)
{
    cout << a + b;
}

int Suma3(void)
{
    return x + y;
}

void Suma4(void)
{
    cout << x + y;
}




/*

float funkcja(float x, float y)
{
    float z = x * y
    return z;
}

int main()
{
    x = 4.5
    y = 6.2137
    z = funkcja(x, y)
    return 0;
}

*/