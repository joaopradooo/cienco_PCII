#include <iostream>

using namespace std;

int main()
{
    //Desenvolva um programa que leia a idade de uma pessoa e verifique se ela � maior de idade (18 anos ou mais).

    int idade;

    cout << "Digite sua idade: ";
    cin >> idade;

    if (idade >= 18){
        cout << "Parab�ns, voc� � maior de idade!";
    } else {
        cout << "Poxa, voc� � menor de idade!";
    }
}
