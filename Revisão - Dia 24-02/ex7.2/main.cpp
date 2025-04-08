#include <iostream>

using namespace std;

int main()
{
    //Desenvolva um programa que exiba a tabuada de um número digitado pelo usuário.

    int numero;
    int i = 1;


     cout << "Digite um número: ";
        cin >> numero;


    while (i <= 10){
        cout << numero << " x " << i << " = " << numero * i << endl;
        i++;
    }
}
