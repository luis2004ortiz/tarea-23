/*3. Se tiene un vector de N enteros. Se pide diseñar la función que devuelva la sumatoria de sus elementos.
También se pide que agregue la función que devuelva el promedio de los elementos del vector. (Realizado en clases)
*/

#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

void fillVector(int vec[], int size)
{
    for(int i=0; i<size; i++)
    {
        int num=1+rand()%(100);
        vec[i]=num;
    }
}

void printVector(int vec[], int size)
{
    cout << endl <<"Vector elements :";
    for(int i=0; i<size; i++)
    {
        cout << endl <<vec[i];
    }
}

int getSum(int vec[], int size)
{
    int sum=0;
    for(int i=0; i<size; i++)
        sum+=vec[i];
    return sum;
}

double getAverage(int vec[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += vec[i];
    }

    return double(sum)/n;
}

int main()
{
    srand(time(NULL));
   
   
    const int MAX = 20;
    int vector[MAX];

    fillVector(vector, MAX);
    printVector(vector,MAX);
    int total=getSum(vector, MAX);

    cout<<endl<<"The sum of the vector is: "<<total;
    cout<<endl<<"The average of the vector is: "<<getAverage(vector, MAX);

    return 0;
}