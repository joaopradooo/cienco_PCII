#include <iostream>

using namespace std;

int main()
{
    //Desenvolva um programa que leia um n�mero e diga se ele � par ou �mpar.

    int numero;

    cout << "Digite um n�mero: ";
    cin >> numero;

    if(numero %2 == 0){
        cout << "Esse n�mero � par!";
    }else {
        cout << "Esse n�mero � impar!";
    }

}


