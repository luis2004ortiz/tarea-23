/*Una funcion recibe como parametro un entero.
La funcion debe imprimir este entero en su
equivalente en Hexadecimal */

#include <iostream>
#include <string>

using namespace std;

string Hexadecimal(int num)
{
    int residuo = 0;
    string aux = " ";
    while(num > 0)
    {
        residuo = num % 16;
        if (residuo < 10) {
            aux = to_string(residuo) + aux;
        } else if (residuo == 10) {
            aux = "A" + aux;
        } else if (residuo == 11) {
            aux = "B" + aux;
        } else if (residuo == 12) {
            aux = "C" + aux;
        } else if (residuo == 13) {
            aux = "D" + aux;
        } else if (residuo == 14) {
            aux = "E" + aux;
        } else if (residuo == 15) {
            aux = "F" + aux;
        }
        num = num / 16;
    }

    return aux;
}

main()
{
    int num;

    cin>>num;

    cout<<Hexadecimal(num);

    return 0;
}
