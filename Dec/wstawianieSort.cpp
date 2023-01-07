#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int tabSize = 10;
const int randAdd = 100;

// Swaps two ints
void intSwap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// sorts a table
void pSort(int tab[], int n)
{
    int i = 0;
    int temp = 0;

    for (int k = 1; k < n; k++)
    {
        i = k;
        temp = tab [i];

        while (i > 0)
        {
            if (temp < tab [i - 1])
            {
                tab [i] = tab [i - 1];
                tab [i - 1] = temp;
            }

            i--;
        }  
    }
}

// Main
int main()
{
    srand(time(NULL));

    int tab[tabSize]; // Declares the table

    cout << "Not sorted:\t";

    // Assigns random integers to each table cell
    for (int i = 0; i < tabSize; ++i)
    {
        tab[i] = rand() % randAdd + 1;
        cout << tab[i] << ", ";
    }

    // Sorts the table
    cout << endl;
    cout << "Sorted:\t\t";
    //  bubbleSort(tab, tabSize);
    pSort(tab, tabSize);

    // Prints out sorted table's contents
    for (int i = 0; i < tabSize; ++i)
        cout << tab[i] << ", ";
    
    return 0;
}
