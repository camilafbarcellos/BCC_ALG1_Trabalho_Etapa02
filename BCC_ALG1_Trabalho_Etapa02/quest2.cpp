#include <iostream>

using namespace std;

//QUESTÃO 2 da Avaliação do dia 20/05/2021
//Camila Florão Barcellos

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int num;

    do
    {
        cout << "Informe um número entre 4 e 9: ";
        cin >> num; //5

        if(num<4 || num>9)
            cout << "Número inválido, tente novamente!" << endl << endl;

    }while(num<4 || num>9);

    int M[num][num]; //5x5

    //preecher matriz com 0
    for(int l=0; l<num; l++)
    {
        for(int c=0; c<num; c++)
            M[l][c] = 0;
    }

    //L em canto superior esquerdo --> M[0][0], M[1][0], M[1][1] e M[1][2]
    M[0][0] = 1;
    for(int i=0; i<=2; i++)
    {
        M[1][i] = 1;
    }

    //L em canto inferior direito --> M[num-1][num-1], M[num-2][num-1], M[num-2][num-2] e M[num-2][num-3]
    M[num-1][num-1] = 1;
    for(int i=1; i<=3; i++)
    {
        M[num-2][num-i] = 1;
    }

    cout << "\nMatriz formada: " << endl;
    for(int l=0; l<num; l++)
    {
        for(int c=0; c<num; c++)
        {
            cout << M[l][c] << "\t";
        }
        cout << endl;
    }

}
