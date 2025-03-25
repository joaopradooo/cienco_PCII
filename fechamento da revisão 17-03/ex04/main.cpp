#include <iostream>

using namespace std;

void calcularComissaoCP(float venda, float comissao);

int main()
{
    float venda, comissao;

    cout << "Entre com o valor da venda: ";
    cin >> venda;

    cout << "Entre com o percentual da comissao: ";
    cin >> comissao;

    calcularComissaoCP(venda, comissao);
}

void calcularComissaoCP(float venda, float comissao)
{
    float valorComissao;
    valorComissao = (venda * comissao) / 100;
    cout << "O valor da comissao: " << valorComissao;
}
