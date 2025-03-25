#include <iostream>
#include <time.h>

using namespace std;

int main()
{

    int vet[5];
    int aleatorio;
    int soma = 0;
    int menor, maior;

    srand(time(NULL));

    for(int i = 0; i < 5; i++){
        aleatorio = rand() % 10;
        vet[i] = aleatorio;
        soma = soma + vet[i];
        cout << vet[i] << " " << endl;
    }

    menor = vet[0];
    maior = vet[0];

    for(int i = 0; i < 5; i++){
        if(vet[i] < menor){
            menor = vet[i];
        }
        if(vet[i] > maior){
            maior = vet[i];
        }

    }
    cout << "Soma: " << soma << endl;
    cout << "Menor: " << menor << endl;
    cout << "Maior: " << maior << endl;
}



