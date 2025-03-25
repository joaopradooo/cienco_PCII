#include <iostream>

using namespace std;

//procedimento sem parametro

void mostrarMensagem();


int main()
{
   mostrarMensagem();
}

void mostrarMensagem()
{
    for(int i = 1; i <= 10; i++)
    {
         cout << "Boa noite! \n";
    }

}
