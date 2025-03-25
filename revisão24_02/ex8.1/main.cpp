#include <iostream>

using namespace std;

int main()
{
    //Desenvolva um programa que peça ao usuário para adivinhar um número secreto (ex7). o Programa deve continuar pedindo até que o usuário acerte;

    int numero;

    //o número secreto é 19
    cout << "Adivinhe o número secreto: ";
    cin >> numero;

    do {
        if (numero != 19) {
            cout << "Número errado. Tente novamente." << endl;
        } else {
            cout << "VOCÊ ACERTOU!!!: " << numero << endl;
        }

    cout << "Adivinhe o número secreto: ";
    cin >> numero;

    } while (numero != 19);

        cout << "VOCÊ ACERTOU!!!: " << numero << endl;

    return 0;


}
