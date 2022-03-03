#include <iostream>
#include <ctime>
#define TAM 15

using namespace std;
void mostrarVetor(int V[TAM]);
float calcMedia(int V[TAM]);

int main ()
{
    setlocale (LC_ALL, "portuguese");
    srand(time(NULL));

    int V[TAM], valor, contV=0, W[TAM], aux, contGerador=0, j=0, cont=0;
    bool repetido, trocou;

    for(int i=0; i<TAM; i++) //vetor sem repetições
    {
        do
        {
            valor = rand()%41; //gerar valor aleatório
            contGerador++;
            repetido = false;

            for(int j=0; j<contV; j++) //percorrer vetor
            {
                if(V[j]==valor) //verificar repetição
                    repetido = true;
            }

            if(repetido==false)
            {
                V[i] = valor; //registrar caso não haja repetição
                contV++;
            }

        }
        while(repetido==true);
    }

    cout << "Vetor V sem repetições: " << endl;
    for(int i=0; i<TAM; i++)
    {
        cout << V[i];
        if(i<TAM)
            cout << ", ";
    }
    cout << endl;

    float media = calcMedia(V);
    cout << "Média do vetor: " << media << endl;

    //seleção de valores do vetor W
    for(int i=0; i<TAM; i++)
    {
        if(V[i]<=media)
        {
            W[j] = V[i];
            j++;
        }
    }

    do
    {
        trocou = false;

        for(int i=0; i<cont-1; i++)
        {
            if(W[i]>W[i+1])
            {
                aux = W[i];
                W[i] = W[i+1];
                W[i+1] = aux;
                trocou = true;
            }
        }
    }
    while(trocou==true);

    cout << "\nVetor W ordenado de modo crescente: " << endl;
    for(int i=0; i<cont; i++)
    {
        cout << W[i];
        if(i<cont-1)
            cout << ", ";
    }
    cout << endl;

}

float calcMedia(int V[TAM])
{
    int soma=0;
    float media;

    for(int i=0; i<TAM; i++)
    {
        soma+=V[i];
    }

    media = soma/TAM;

    return media;
}
