#include <iostream>

using namespace std;

int main()
{
    int numero;
    int vetor[5];

    for (int i = 0; i < 5; i++){
        cout << "Digite um valor: ";
        cin >> numero;
        vetor [i] = numero;
    }

    for (int i = 0; i < 5; i++){
        cout << i << " " << vetor[i] << endl;
    }
}
