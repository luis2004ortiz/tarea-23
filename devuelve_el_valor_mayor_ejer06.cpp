/*6. Diseñe la función devuelve el valor mayor de un vector de N elementos.
Por ejemplo: Si el vector es 16, 3, 4, 55, 6, 10, 1, 33, 12. El valor mayor sería el 55.

*/

#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int FindLargest(const int vector[], int size) 
{
    int largest = vector[0];
    for (int i = 1; i < size; ++i) 
    {
        if (vector[i] > largest) 
        {
            largest = vector[i];
        }
    }
    return largest;
}

int main() 
{
    const int SIZE = 9;
    int vector[SIZE];

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

    int largestValue = FindLargest(vector, SIZE);
    cout << "The largest value in the vector is: " << largestValue << endl;

    return 0;
}