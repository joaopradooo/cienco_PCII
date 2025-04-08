#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int opcao, periodo;
    float valorAplicar,  juros, montante;

    do{

    cout << "OPCOES DE INVESTIMENTO:" <<  endl;
    cout << "1- POUPANCA SIMPLES" << endl;
    cout << "2- POUPANCA PLUS" << endl;
    cout << "3- POUPANCA MEGA" << endl;
    cin >> opcao;
    cout << endl;



    switch (opcao) {
        case 1:
            cout << fixed << setprecision(2);
            cout << "Você escolheu a opção 1." << endl;
            cout << endl;
            cout << endl;

            do{
                cout << "Digite o valor que deseja aplicar (minimo 1.000 reais):" << endl;
            cin >> valorAplicar;

            } while (valorAplicar < 1000);

            do{
                cout << "Digite o periodo da aplicacao em meses (minimo 3 meses): " << endl;
            cin >> periodo;

            } while (periodo < 3);

                juros = (valorAplicar * 1 * periodo) / 100;
                montante = valorAplicar + juros;



            cout << endl;
            cout << endl;
            cout << "============================================================" << endl;
            cout << "Voce escolheu a opção 1 - Poupança Simples" << endl;
            cout << "============================================================" << endl;
            cout << "O valor investido foi de: " << valorAplicar << " reais." << endl;
            cout << endl;
            cout << "O tempo inserido de aplicacao foi de: " << periodo << " meses." << endl;
            cout << endl;
            cout << "O valor de juros acumulados foi de: " << juros << " reais." << endl;
            cout << endl;
            cout << "O valor do montante final é de: " << montante << " reais";
            break;
        case 2:
            cout << fixed << setprecision(2);
            cout << "Você escolheu a opção 2." << endl;
            cout << endl;
            cout << endl;

            do{
                cout << "Digite o valor que deseja aplicar (minimo 5.000 reais):" << endl;
            cin >> valorAplicar;

            } while (valorAplicar < 5000);

            do{
                cout << "Digite o periodo da aplicacao em meses (minimo 6 meses): " << endl;
            cin >> periodo;

            } while (periodo < 6);

                juros = (valorAplicar * 1.5 * periodo) / 100;
                montante = valorAplicar + juros;



            cout << endl;
            cout << endl;
            cout << "============================================================" << endl;
            cout << "Voce escolheu a opção 2 - Poupança Plus" << endl;
            cout << "============================================================" << endl;
            cout << "O valor investido foi de: " << valorAplicar << " reais." << endl;
            cout << endl;
            cout << "O tempo inserido de aplicacao foi de: " << periodo << " meses." << endl;
            cout << endl;
            cout << "O valor de juros acumulados foi de: " << juros << " reais." << endl;
            cout << endl;
            cout << "O valor do montante final é de: " << montante << " reais";
            break;
        case 3:
            cout << fixed << setprecision(2);
            cout << "Você escolheu a opção 3." << endl;
            cout << endl;
            cout << endl;

            do{
                cout << "Digite o valor que deseja aplicar (minimo 10.0000 reais):" << endl;
            cin >> valorAplicar;

            } while (valorAplicar < 5000);

            do{
                cout << "Digite o periodo da aplicacao em meses (minimo 12 meses): " << endl;
            cin >> periodo;

            } while (periodo < 12);

                juros = (valorAplicar * 2 * periodo) / 100;
                montante = valorAplicar + juros;



            cout << endl;
            cout << endl;
            cout << "============================================================" << endl;
            cout << "Voce escolheu a opção 3 - Poupança Mega" << endl;
            cout << "============================================================" << endl;
            cout << "O valor investido foi de: " << valorAplicar << " reais." << endl;
            cout << endl;
            cout << "O tempo inserido de aplicacao foi de: " << periodo << " meses." << endl;
            cout << endl;
            cout << "O valor de juros acumulados foi de: " << juros << " reais." << endl;
            cout << endl;
            cout << "O valor do montante final é de: " << montante << " reais";
            break;
        default:
            cout << "Opção inválida." << endl;
            break;
        }
    } while (opcao != 1 && opcao != 2 && opcao != 3);




}
