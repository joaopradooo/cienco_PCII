#include <iostream>

using namespace std;

int main()
{
    //Desenvolva um programa que leia duas notas e calcule a m�dia. Se a m�dia for maior ou igual a 6, exiba "Aprovado", caso contr�rio, exiba "Reprovado"

    float nota1, nota2, media;

    cout << "Digite a primeira nota: ";
    cin >> nota1;

    cout << "Digite a segunda nota: ";
    cin >> nota2;

    media = (nota1 + nota2) / 2;

    if(media >= 6){
        cout << "Aprovado!";
    } else{
        cout << "Reprovado!";
    }
}
