#include <iostream>

using namespace std;

int main()
{
    //Desenvolva um programa que leia n�meros at� que o usu�rio digite 0. Ao final, exiba a soma dos n�meros digitados.

    int numero;
    int soma = 0;

        cout << "Digite um n�mero: ";
        cin >> numero;

    while (numero != 0 ) {
            soma = soma + numero;

        cout << "Digite um n�mero: ";
        cin >> numero;

    }

    cout << soma;
}
