/*7. Diseñe la función devuelve el valor menor de un vector de N Elementos.
Por ejemplo: Si el vector es 16, 3, 4, 55, 6, 10, 1, 33, 12. El valor menor sería el 1

*/

#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int FindSmallest(const int vector[], int size) 
{
    int smallest = vector[0];
    for (int i = 1; i < size; ++i) 
    {
        if (vector[i] < smallest) 
        {
            smallest = vector[i];
        }
    }
    return smallest;
}

int main() 
{
    const int SIZE = 10;
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

    int smallestValue = FindSmallest(vector, SIZE);
    cout << "The smallest value is: " << smallestValue << endl;

    return 0;
}