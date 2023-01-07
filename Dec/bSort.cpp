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

// Bubble sorts a table
void bubbleSort(int tab[], int n)
{
    bool sorted;
    for (int i = 1; i < n; i++)
    {
        sorted = false;

        for (int j = 0; j < n - i; j++)
        {
            if (tab[j] > tab[j + 1])
            {
                intSwap(tab[j], tab[j + 1]);
                sorted = true;
            }
        }

        if (!sorted)
            return;
    }
}

// Main
int main()
{
    int tab[tabSize];   // Declares the table

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
    bubbleSort(tab, tabSize);

    // Prints out sorted table's contents
    for (int i = 0; i < tabSize; ++i)
        cout << tab[i] << ", ";

    return 0;
}
