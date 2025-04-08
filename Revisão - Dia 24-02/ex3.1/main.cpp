#include <iostream>

using namespace std;

int main()
{
    //Desenvolva um programa que leia um número e diga se ele é par ou ímpar.

    int numero;

    cout << "Digite um número: ";
    cin >> numero;

    if(numero %2 == 0){
        cout << "Esse número é par!";
    }else {
        cout << "Esse número é impar!";
    }

}


