#include <iostream>

using namespace std;

int main()
{

    // Desenvolva um programa que leia um número e verifique se ele é positivo ou negativo.

    int numero;

    cout << "Digite um número: ";
    cin >> numero;

    if (numero >= 0){
        cout << "Esse número é positivo!";
    } else {
        cout << "Esse número é negativo!";
    }

}
