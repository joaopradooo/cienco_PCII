#include <iostream>

using namespace std;

int main()
{
    //Desenvolva um programa que leia um n�mero e informe se ele � positivo, negativo ou zero.

    float numero;

    cout << "Digite um n�mero: ";
    cin >> numero;

    if(numero > 0){
        cout << "Esse n�mero � positivo!";
    }else if(numero == 0){
        cout << "Esse n�mero � o zero!";
    } else{
        cout << "Esse n�mero � negativo!";
    }
}
