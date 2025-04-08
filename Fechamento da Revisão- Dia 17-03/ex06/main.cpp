#include <iostream>

using namespace std;

int somarCP(int a, int b);

int main()
{
    int a, b;

    cout << "Digite o valor de A: ";
    cin >> a;


    cout << "Digite o valor de B: ";
    cin >> b;

    cout << somarCP(a, b);
}


int somarCP(int a, int b)
{
    int soma;
    soma = a+b;
    return soma;
}
