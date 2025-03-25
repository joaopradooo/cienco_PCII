#include <iostream>

using namespace std;

int main()
{
    //Desenvolva um programa que leia números até que o usuário digite um número negativo. Ao final, exiba a quantidade de números digitados.

    int numero;
    int quantidade = 0;

    cout << "Digite um número: ";
    cin >> numero;
    quantidade++;

    do {
        if (numero >= 0) {
            cout << "Digite novamente mais um número" << endl;
        } else {
            cout << "Programa finalizado" << endl;
            quantidade++;
        }

    cout << "Digite um número: ";
    cin >> numero;
    quantidade++;

    } while (numero >= 0);

        cout << "Programa Finalizado: " << endl;

        cout << "Foram digitados " << quantidade << " numeros." << endl;

    return 0;
}
