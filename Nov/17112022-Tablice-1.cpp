#include <iostream>
#include <cstdlib>
#include <time.h>

#define niePodpisany unsigned
#define zmiennaCalkowita int
#define zmiennaCalkowitaDluga long
#define zmiennaCalkowitaKrotka short
#define zmiennaZmiennoprzecinkowa float
#define zmiennaZmiennoprzecinkowaPodwojna double
#define znak char
#define sznurek string
#define binarny  
#define proznia void
#define glowny main

#define staly const
#define prawda true
#define falsz false

#define wypisz cout 
#define wczytaj cin 
#define nowaLinia endl 

#define jezeli if 
#define wPrzeciwnymWypadku else
#define przelacz switch
#define wypadek case

#define podczas while
#define wykonaj do
#define podczasGdy for

#define zwrot return
#define idzDo goto
#define zniszcz break

using namespace std;

// Polski CPLusPLus yeee

// Polecenie - stwórz tablicę liczb losowych z zakresu od 1 do `n` 
// Następnie podajemy jakąkolwiek liczbę z klawiatury
// Program zwraca informację czy dana liczba istnieje 

// Można wyszukać MIN oraz MAX

staly zmiennaCalkowita rozmiarTablicy = 100;

zmiennaCalkowita glowny()
{   
    srand(time(NULL));

    // Deklaruje kilka zmiennych
    zmiennaCalkowita randLimit = 0;             // Zakres n (generuje liczby DO tego) 
    zmiennaCalkowita tablica [rozmiarTablicy];  // Deklaruje tablicę
    zmiennaCalkowita liczba = 0;                // Zmienna przechowująca liczbę którą chcemy wyszukać
    zmiennaCalkowita liczbaWystepujeIle = 0;    // Liczy ile nasza liczba występuje
    zmiennaCalkowita gdzie [rozmiarTablicy];    // Przechowuje miejsca gdzie znajduje się nasza liczba
    zmiennaCalkowita min = 0;                   // Przechowuje najmniejszą liczbę
    zmiennaCalkowita max = 0;                   // Przechowuje największą liczbę

    wypisz << "Podaj maksymalny zakres n - ";   
    wczytaj >> randLimit;                       // Wczytuje n (zakres DO)
    min = randLimit;

    wypisz << "Podaj liczbe, ktora chcesz wyszukac - ";     
    wczytaj >> liczba;                          // Wczytuje liczbę którą chcemy wyszukać
    
    wypisz << nowaLinia;                    

    // Ustawia 0 w każde miejsce tablicy przechowującej częstotliwość
    // występowania naszej liczby, potem zostanie nadpisane gdzie trzeba
    podczasGdy (zmiennaCalkowita wpisz0doGdzie = 0; wpisz0doGdzie < rozmiarTablicy; wpisz0doGdzie++)
    {
        gdzie [wpisz0doGdzie] = 0;
    }

    // Generuje losowe liczby od 1 do n oraz wpisuje je 
    // w poszczególne miejsca tablicy
    podczasGdy (zmiennaCalkowita i = 0; i < rozmiarTablicy; i++)
    {   
        tablica [i] = rand() % randLimit + 1; 
    }

    // Sprawdza wiele rzeczy
    podczasGdy (zmiennaCalkowita j = 0; j < rozmiarTablicy; j++)
    {   
        // Sprawdza miejsca występowania szukanej liczby
        jezeli (tablica [j] == liczba)
        {
            liczbaWystepujeIle++;   // Dodaje 1 do licznika jeżeli znajdzie
            gdzie [j] ++;           // Wpisuje 1 w dane miejsce tabeli
        }
        
        // Szuka największej liczby
        jezeli (tablica [j] >= max)
            max = tablica [j];

        // Szuka najmniejszej liczby
        wPrzeciwnymWypadku jezeli (tablica [j] <= min)
            min = tablica[j];
    }

    // Wypisuje "[która komórka] - [jaka wartość] - [czy zawiera szukaną liczbę? (0/1) ]"
    int kom = 1;    // od "komórka"
    podczasGdy (zmiennaCalkowita wypiszTablice = 0; wypiszTablice < rozmiarTablicy; wypiszTablice++)
    {   
        wypisz << "Kom " << kom << "\t - " << tablica [wypiszTablice] << "\t - " << gdzie [wypiszTablice] << nowaLinia;
        kom++;
    }

    // Normalny endl
    wypisz << nowaLinia << nowaLinia;

    // Wypisuje ważne statystyki
    wypisz << nowaLinia;
    wypisz << "Szukana liczba wystepuje " << liczbaWystepujeIle << " razy" << nowaLinia;
    wypisz << "Najmniejsza liczba to " << min << nowaLinia;
    wypisz << "Najwieksza liczba to " << max << nowaLinia << nowaLinia;
    
}
