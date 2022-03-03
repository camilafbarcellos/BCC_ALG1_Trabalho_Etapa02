#include <iostream>
#include <ctime>
#define TAM 10

using namespace std;
int gerarVetor(int V[TAM]);
void mostrarVetor(int V[TAM]);
int calcSoma(int V[TAM]);

int main ()
{
    setlocale (LC_ALL, "portuguese");
    srand(time(NULL));

    int op, V[TAM], soma;

    do
    {
        cout << "----------------------------" << endl;
        cout << "         -- MENU --         " << endl;
        cout << "----------------------------" << endl;
        cout << "  1- Gerar                  " << endl;
        cout << "  2- Mostrar                " << endl;
        cout << "  3- Somar                  " << endl;
        cout << "  4- Sair                   " << endl;
        cout << "----------------------------" << endl;
        cin >> op;

        switch(op)
        {
        case 1:
            V[TAM] = gerarVetor(V);
            break;
        case 2:
            cout << "\nVetor gerado aleatoriamente: " << endl;
            mostrarVetor(V);
            break;
        case 3:
            soma = calcSoma(V);
            cout << "Soma dos valores do vetor: " << soma << endl;
            break;
        case 4:
            cout << "Saindo do programa..." << endl;
            break;
        default:
            cout << "Opção inválida\n";
            break;
        }

        cout << endl;
        system("pause"); //aguarda pressionamento de tecla
        system("cls"); //limpar tela

    }while(op!=4);

}

int gerarVetor(int V[TAM])
{
    V[TAM] = 0; //zerar vetor em cada seleção

	for(int i=0; i<TAM; i++)
    {
        V[i] = rand()%11;
    }

    return V[TAM];
}

void mostrarVetor(int V[TAM])
{
    for(int i=0; i<TAM; i++)
    {
        cout << V[i];
        if(i<9)
            cout << ", ";
    }
    cout << endl;
}

int calcSoma(int V[TAM])
{
    int soma=0;

    for(int i=0; i<TAM; i++)
    {
        soma += V[i];
    }

    return soma;
}
