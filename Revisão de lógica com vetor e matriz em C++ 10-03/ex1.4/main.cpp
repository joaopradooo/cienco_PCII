#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));

    int vetor[5];
    int soma = 0;
    int aleat;


    for (int i = 0; i < 5; i++){
       aleat = rand() % 10;
       vetor[i] = aleat;
       soma = soma + vetor[i];

       cout << vetor[i] << " " << endl;

    }

        cout << "\n" << soma << endl;


}
