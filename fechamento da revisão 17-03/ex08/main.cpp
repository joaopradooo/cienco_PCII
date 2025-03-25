#include <iostream>

using namespace std;

int somarIntervalo(int a, int b, int soma);

int main()
{
    int a, b;
    int soma = 0;

    cout << "Digite o valor de A: ";
    cin >> a;

    cout << "Digite o valor de B: ";
    cin >> b;

    cout << somarIntervalo(a,b,soma);
}

int somarIntervalo(int a, int b, int soma)
{

    for (int i = a; i <= b; i++)
    {
        soma = soma + i;
    }

    return soma;
}
