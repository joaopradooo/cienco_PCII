#include <iostream>

using namespace std;

int main()
{
    //Desenvolva um programa que leia o raio de um c�rculo e calcule sua �rea (use a f�rmula: �rea = pi * raio^2, considere pi = 3.1).

    float raio, area;

    cout << "Digite o raio do c�rculo: ";
    cin >> raio;

    area = 3.14 * (raio * raio);

    cout << "A �rea desse c�rculo �: " << area;
}
