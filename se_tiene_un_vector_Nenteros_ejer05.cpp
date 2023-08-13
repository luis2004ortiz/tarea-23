/*5. Se tiene un vector de N enteros. Diseñe la función que determina cuantas veces se encuentra un número cualquiera en el vector.
Por ejemplo: si el array es 10, 2, 3, 4, 2, 7, 2, 1, 2, 77 y se pide buscar el número 2
El resultado sería: El elemento #2 existe en el vector 4 veces
Código: 

*/

#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int CountOccurrences(int num, const int vector[], int size) 
{
    int count = 0;
    for (int i = 0; i < size; ++i) 
    {
        if (vector[i] == num) 
        {
            count++;
        }
    }
    return count;
}

int main() 
{
    const int SIZE = 10;
    int vector[SIZE];
    int num;

    srand(time(NULL));

    for (int i = 0; i < SIZE; ++i) 
    {
        vector[i] = rand() % 100 + 1;
    }

    cout << "Vector: ";
    for (int i = 0; i < SIZE; ++i) 
    {
        cout << vector[i] << " ";
    }
    cout << endl;

    cout << "Ingrese el número que desea buscar: ";
    cin >> num;

    int occurrences = CountOccurrences(num, vector, SIZE);
    cout << "El elemento #" << num << " existe en el vector " << occurrences << " times." << endl;

    return 0;
}