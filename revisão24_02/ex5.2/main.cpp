#include <iostream>

using namespace std;

int main()
{
    //Desenvolva um programa que leia dois n�meros e uma opera��o (+, -, *, /) e exiba o resultado da opera��o.

    float numero1, numero2, resultado;
    int operacao;

    cout << "Digite o primeiro n�mero: ";
    cin >> numero1;

    cout << "Digite o segundo n�mero: ";
    cin >> numero2;

    cout << "QUAL OPERA��O DESEJA REALiZAR?" << endl;
    cout << "1- SOMA" << endl;
    cout << "2- SUBTRA��O" << endl;
    cout << "3- MULTIPLICA��O" << endl;
    cout << "4- DIVIS�O" << endl;
    cout << "DIGITE 1, 2, 3 ou 4: ";
    cin >> operacao;

    switch (operacao) {
        case 1:
            resultado = numero1 + numero2;
            cout << "SOMA:  " << resultado << endl;
            break;
        case 2:
            resultado = numero1 - numero2;
            cout << "SUBTRA��O: " << resultado << endl;
            break;
        case 3:
            resultado = numero1 * numero2;
            cout << "MULTIPLICA��O: " << resultado << endl;
            break;
        case 4:
            resultado = numero1 / numero2;
            cout << "DIVIS�O: " << resultado << endl;
            break;
        default:
            cout << "Op��o inv�lida!" << endl;
    }

    return 0;



}
