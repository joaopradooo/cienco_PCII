#include <iostream>
#include <iomanip>

using namespace std;

void calcularComissaoSP();

int main()
{
    calcularComissaoSP();
}

void calcularComissaoSP()
{
    float venda, comissao;
    cout << fixed;
    cout << setprecision(2);
    cout << "Entre com o valor da venda: ";
    cin >> venda;
    comissao = venda * 0.10;
    cout << "Valor da comissao: " << comissao << endl;
}
