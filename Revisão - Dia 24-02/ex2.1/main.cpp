#include <iostream>

using namespace std;

int main()
{

    // Desenvolva um programa que leia um n�mero e verifique se ele � positivo ou negativo.

    int numero;

    cout << "Digite um n�mero: ";
    cin >> numero;

    if (numero >= 0){
        cout << "Esse n�mero � positivo!";
    } else {
        cout << "Esse n�mero � negativo!";
    }

}
