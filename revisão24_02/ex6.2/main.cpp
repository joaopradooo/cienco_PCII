#include <iostream>

using namespace std;

int main()
{
    //Desenvolva um programa que calcule a soma dos números de 1 a 100.

    int soma = 0;

    for (int i = 1; i <= 100; i++) {
        soma += i;
    }
    cout << soma << endl;

    return 0;
}
