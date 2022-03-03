#include <iostream>
#define TAM 10

using namespace std;
int adicionar(int V[TAM]);
int remover(int V[TAM]);
void mostrarVetor(int V[TAM]);

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int op;
    int V[TAM] = {0}; //inicializar vetor com zeros

    do
    {
        cout << "----------------------------" << endl;
        cout << "         -- MENU --         " << endl;
        cout << "----------------------------" << endl;
        cout << "  5- Adicionar              " << endl;
        cout << "  6- Remover                " << endl;
        cout << "  7- Mostrar vetor          " << endl;
        cout << "  8- Sair                   " << endl;
        cout << "----------------------------" << endl;
        cin >> op;

		adicionar remover mostrar vetor sair

        switch(op)
        {
        case 5:
            V[TAM] = adicionar(V);
            break;
        case 6:
           V[TAM] = remover(V);
            break;
        case 7:
            mostrarVetor(V);
            break;
        case 8:
            cout << "Saindo do programa..." << endl;
            break;
        default:
            cout << "Opção inválida\n";
            break;
        }

        cout << endl;
        system("pause"); //aguarda pressionamento de tecla
        system("cls"); //limpar tela

    }while(op!=8);

}

int adicionar(int V[TAM])
{
    int valor, pos;

    cout << "Insira o valor: ";
    cin >> valor;
    cout << "Informe a posição desejada: ";
    cin >> pos;

    V[pos-1] = valor;

    return V[TAM];
}

int remover(int V[TAM])
{
    int pos;

    cout << "Informe a posição desejada para retirada: ";
    cin >> pos;

    V[pos-1] = 0;

    return V[TAM];
}

void mostrarVetor(int V[TAM])
{
    cout << endl;
    for(int i=0; i<TAM; i++)
    {
        cout << V[i];
        if(i<9)
            cout << ", ";
    }
    cout << endl;
}
