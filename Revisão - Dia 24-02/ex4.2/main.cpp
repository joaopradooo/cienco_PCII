#include <iostream>

using namespace std;

int main()
{
    //Desenvolva um programa que leia a idade de uma pessoa e classifique-a em: crian�a (0-12 anos), adolescente (13-17 anos), adulto(18-59 anos) ou idoso (60 anos ou mais).

        int idade;

        cout << "Digite sua idade: ";
        cin >> idade;

        if (idade >= 0 && idade <= 12){
            cout << "� uma crian�a!";
        } else if (idade >= 13 && idade <= 17){
            cout << "� um adolescente!";
        } else if (idade >= 18 && idade <= 59){
            cout << "� um adulto!";
        }else {
            cout << "� um idoso!";
        }
}
