#include <iostream>
#define LIN 0
#define COL 0

using namespace std;
int gerarMatriz(int M[LIN][COL], int num);
void mostrarMatriz(int M[LIN][COL]);

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int num;

    do
    {
        cout << "Informe um número ímpar entre 5 e 13: ";
        cin >> num;

        if(num<5 || num>13 || num%2==0)
        {
            cout << "Número inválido, tente novamente!" << endl << endl;
            system("pause");
            system("cls");
        }
    }while(num<5 || num>13 || num%2==0);

    int MAT1[num][num] = {0};
    int metade = num/2;

    for(int l=0; l<num; l++) //preecher matriz com 0
    {
        for(int c=0; c<num; c++)
            MAT1[l][c] = 0;
    }

    for(int i=0; i<num; i++) //colocar 1 na linha e coluna mediana
    {
        MAT1[metade][i] = 1;
        MAT1[i][metade] = 1;
    }

    cout << "\nMatriz formada: " << endl;
    for(int l=0; l<num; l++) //imprimir matriz
    {
        for(int c=0; c<num; c++)
        {
            cout << MAT1[l][c] << "\t";
        }
        cout << endl;
    }

}
