#include <iostream>

using namespace std;

int main()
{
    //Desenvolva um programa que leia n�meros at� que o usu�rio digite um n�mero negativo. Ao final, exiba a quantidade de n�meros digitados.

    int numero;
    int quantidade = 0;

    cout << "Digite um n�mero: ";
    cin >> numero;
    quantidade++;

    do {
        if (numero >= 0) {
            cout << "Digite novamente mais um n�mero" << endl;
        } else {
            cout << "Programa finalizado" << endl;
            quantidade++;
        }

    cout << "Digite um n�mero: ";
    cin >> numero;
    quantidade++;

    } while (numero >= 0);

        cout << "Programa Finalizado: " << endl;

        cout << "Foram digitados " << quantidade << " numeros." << endl;

    return 0;
}
