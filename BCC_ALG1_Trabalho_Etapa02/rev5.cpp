#include <iostream>
#include <ctime>
#define TAM 0

using namespace std;
int calcSoma(int V[TAM], int num);

int main ()
{
    setlocale (LC_ALL, "portuguese");
    srand(time(NULL));

    int num;

    do
    {
        cout << "Informe um número entre 7 e 50: ";
        cin >> num;

        if(num<7 || num>50)
            cout << "Número inválido, tente novamente!" << endl << endl;

    }while(num<7 || num>50);

    int V[num];

    for(int i=0; i<num; i++)
    {
        V[i] = rand()%51;
        cout << V[i];
        if(i!=num-1)
            cout << ", ";
        else
            cout << endl;
    }

    int soma = calcSoma(V, num);
    cout << "\nSoma dos valores do vetor: " << soma << endl;

}

int calcSoma(int V[TAM], int num)
{
    int tam = num;
    int soma=0;

    for(int i=0; i<num; i++)
    {
        soma += V[i];
    }

    return soma;
}
