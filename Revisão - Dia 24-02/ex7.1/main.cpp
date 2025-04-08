#include <iostream>

using namespace std;

int main()
{
    //Desenvolva um programa que leia números até que o usuário digite 0. Ao final, exiba a soma dos números digitados.

    int numero;
    int soma = 0;

        cout << "Digite um número: ";
        cin >> numero;

    while (numero != 0 ) {
            soma = soma + numero;

        cout << "Digite um número: ";
        cin >> numero;

    }

    cout << soma;
}
