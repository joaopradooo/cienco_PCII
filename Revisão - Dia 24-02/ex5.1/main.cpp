#include <iostream>

using namespace std;

int main()
{
    //Desenvolva um programa que leia um número de 1 a 7 e exiba o dia da semana correspondente.

    int dia;

    cout << "Digite um dia da semana em números (1 à 7): ";
    cin >> dia;

    switch (dia) {
        case 1:
            cout << "1 corresponde a Domingo!" << endl;
            break;
        case 2:
            cout << "2 corresponde a Segunda-Feira!" << endl;
            break;
        case 3:
            cout << "3 corresponde a Terça-Feira!" << endl;
            break;
        case 4:
            cout << "4 corresponde a Quarta-Feira!" << endl;
            break;
        case 5:
            cout << "5 corresponde a Quinta-Feira!" << endl;
            break;
        case 6:
            cout << "6 corresponde a Sexta-Feira!" << endl;
            break;
        case 7:
            cout << "7 corresponde a Sábado!" << endl;
            break;
        default:
            cout << "Opção inválida!" << endl;
    }

    return 0;
}
