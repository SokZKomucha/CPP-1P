#include <iostream>

using namespace std;

const int tabSize = 16;

void quickSort(int l, int p, int tab[])
{
    int i = l; 
    int j = p;
    int pivot = tab [(l + p) / 2];
    int temp = 0;

    do {
        while (tab [i] < pivot) 
            i++;
        while (tab [j] > pivot)
            j--;

        if (i <= j)
        {
            temp = tab [i];
            tab [i] = tab [j];
            tab [j] = temp;
            i++;
            j--;    
        }
    } while (i <= j);

    if (l < j) 
        quickSort(l, j, tab);

    if (i < p) 
        quickSort(i, p, tab);
}

int main()
{   
    int tab [tabSize];  // Tab

    for (int i = 0; i < tabSize; i++) 
        tab [i] = rand() % 30 + 1;

    for (int i = 0; i < tabSize; i++) 
        cout << tab [i] << " ";

    cout << endl;
    int p = 0;
    int k = tabSize-1;

    quickSort(0, tabSize - 1, tab);

    for (int i = 0; i < tabSize; i++) 
        cout << tab [i] << " ";
}