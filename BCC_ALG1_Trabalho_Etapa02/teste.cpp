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
            repetido = false;

            for(int j=0; j<contV; j++) //percorrer vetor
            {
                if(V[j]==valor) //verificar repetição
                    repetido = true;
            }

            if(repetido==false)
                V[i] = valor; //registrar caso não haja repetição

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


}

