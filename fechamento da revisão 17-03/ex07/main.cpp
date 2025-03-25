#include <iostream>

using namespace std;

int somarIntervalo();

int main()
{
   cout << somarIntervalo();
}

int somarIntervalo()
{
    int a = 1;
    int b = 10;
    int soma = 0;

    for (int i = a; i <= b; i++)
    {
        soma = soma + i;
    }

    return soma;
}
