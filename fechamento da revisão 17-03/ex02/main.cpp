#include <iostream>

using namespace std;

//procedimento com parametro

void mostrarMensagemVezes(int vezes);

int main()
{
    mostrarMensagemVezes(15);
}

void mostrarMensagemVezes(int vezes)
{
    for (int i = 1; i <= vezes; i++)
    {
        cout << "CIENCO \n";
    }
}
