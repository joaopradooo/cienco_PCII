#include <iostream>

using namespace std;

int main()
{
    //Desenvolva um programa que pe�a ao usu�rio para adivinhar um n�mero secreto (ex7). o Programa deve continuar pedindo at� que o usu�rio acerte;

    int numero;

    //o n�mero secreto � 19
    cout << "Adivinhe o n�mero secreto: ";
    cin >> numero;

    do {
        if (numero != 19) {
            cout << "N�mero errado. Tente novamente." << endl;
        } else {
            cout << "VOC� ACERTOU!!!: " << numero << endl;
        }

    cout << "Adivinhe o n�mero secreto: ";
    cin >> numero;

    } while (numero != 19);

        cout << "VOC� ACERTOU!!!: " << numero << endl;

    return 0;


}
