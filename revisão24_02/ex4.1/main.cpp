#include <iostream>

using namespace std;

int main()
{
    //Desenvolva um programa que leia um número e informe se ele é positivo, negativo ou zero.

    float numero;

    cout << "Digite um número: ";
    cin >> numero;

    if(numero > 0){
        cout << "Esse número é positivo!";
    }else if(numero == 0){
        cout << "Esse número é o zero!";
    } else{
        cout << "Esse número é negativo!";
    }
}
