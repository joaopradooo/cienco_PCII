#include <iostream>

using namespace std;

int main()
{
    //Desenvolva um programa que exiba a tabuada de um n�mero digitado pelo usu�rio.

    int numero;
    int i = 1;


     cout << "Digite um n�mero: ";
        cin >> numero;


    while (i <= 10){
        cout << numero << " x " << i << " = " << numero * i << endl;
        i++;
    }
}
