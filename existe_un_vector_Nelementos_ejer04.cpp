/*4. Diseñe la función que determina si un número cualquiera existe en un vector de N elementos. Si el número existe, devuelve verdadero,
 devuelve falso en caso contrario.
*/

#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

bool isNumberInVector(int num, const int vector[], int size) 
{
    for (int i = 0; i < size; ++i) 
    {
        if (vector[i] == num) 
        {
            return true;
        }
    }
    return false;
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

    cout << "Enter the number you want to search: ";
    cin >> num;

    if (isNumberInVector(num, vector, SIZE)) 
    {
        cout << "True. The number exists in the vector." << endl;
    } 
    else 
    {
        cout << "False. The number does not exist in the vector." << endl;
    }

    return 0;
}