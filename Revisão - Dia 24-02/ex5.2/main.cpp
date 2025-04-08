#include <iostream>

using namespace std;

int main()
{
    //Desenvolva um programa que leia dois números e uma operação (+, -, *, /) e exiba o resultado da operação.

    float numero1, numero2, resultado;
    int operacao;

    cout << "Digite o primeiro número: ";
    cin >> numero1;

    cout << "Digite o segundo número: ";
    cin >> numero2;

    cout << "QUAL OPERAÇÃO DESEJA REALiZAR?" << endl;
    cout << "1- SOMA" << endl;
    cout << "2- SUBTRAÇÃO" << endl;
    cout << "3- MULTIPLICAÇÃO" << endl;
    cout << "4- DIVISÃO" << endl;
    cout << "DIGITE 1, 2, 3 ou 4: ";
    cin >> operacao;

    switch (operacao) {
        case 1:
            resultado = numero1 + numero2;
            cout << "SOMA:  " << resultado << endl;
            break;
        case 2:
            resultado = numero1 - numero2;
            cout << "SUBTRAÇÃO: " << resultado << endl;
            break;
        case 3:
            resultado = numero1 * numero2;
            cout << "MULTIPLICAÇÃO: " << resultado << endl;
            break;
        case 4:
            resultado = numero1 / numero2;
            cout << "DIVISÃO: " << resultado << endl;
            break;
        default:
            cout << "Opção inválida!" << endl;
    }

    return 0;



}
