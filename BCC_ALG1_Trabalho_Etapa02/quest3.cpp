#include <iostream>

using namespace std;
float calcFranquia(char mod, int idade, char sexo);
float calcDescAcresc(char mod, char sexo, float total);

//QUESTÃO 3 da Avaliação do dia 20/05/2021
//Camila Florão Barcellos

int main ()
{
    setlocale (LC_ALL, "portuguese");

    char mod, sexo;
    int idade;
    float total, novoTotal;

    do
    {
        cout << "Informe a modalidade do seguro (C-completo / P-plus / S-sofisticado / T-somente terceiros): ";
        cin >> mod;
        mod = toupper(mod);

        if(mod!='C' && mod!='P' && mod!='S' && mod!='T')
            cout << "Modalidade inválida, tente novamente!" << endl << endl;

    }
    while(mod!='C' && mod!='P' && mod!='S' && mod!='T');

    do
    {
        cout << "Informe a idade do motorista em anos completos: ";
        cin >> idade;

        if(idade<18)
            cout << "Idade inválida, você precisa ser maior de 18 anos!" << endl << endl;
    }
    while(idade<18);

    do
    {
        cout << "Informe o sexo do motorista (F-feminino / M-masculino): ";
        cin >> sexo;
        sexo = toupper(sexo);

        if(sexo!='F' && sexo!='M')
            cout << "Sexo inválido, tente novamente!" << endl << endl;

    }
    while(sexo!='F' && sexo!='M');

    total = calcFranquia(mod, idade, sexo);
    cout << "\nValor da franquia adquirida: R$" << total << endl << endl;

    cout << "------------------------- DESCONTO/ACRÉSCIMO -------------------------" << endl;

    if(sexo=='F')
        cout << "-- Devido ao seu SEXO, você receberá DESCONTO bônus na franquia     --" << endl;
    else
        cout << "-- Devido ao seu SEXO, você sofrerá ACRÉSCIMO de valor na franquia  --" << endl;

    cout << "----------------------------------------------------------------------" << endl;

    novoTotal = calcDescAcresc(mod, sexo, total);
    cout << "\nValor total após desconto/acréscimo sofrido: R$" << novoTotal << endl;



}

float calcFranquia(char mod, int idade, char sexo)
{
    float total;

    switch(mod)
    {
    case 'C':
    {
        if(idade>=18 && idade<=21)
            total = 2500;
        else
            total = 2400;
        break;
    }

    case 'P':
    {
        if(idade>=18 && idade<=21)
            total = 2300;
        else
            total = 2200;
        break;
    }

    case 'S':
    {
        if(idade>=18 && idade<=21)
            total = 2100;
        else
            total = 2000;
        break;
    }

    case 'T':
    {
        if(idade>=18 && idade<=21)
            total = 1900;
        else
            total = 1800;
        break;
    }
    }

    return total;
}

float calcDescAcresc(char mod, char sexo, float total)
{
    float novoTotal;

    switch(mod)
    {
    case 'C':
    {
        if(sexo=='F')
            novoTotal = total-(total*0.04);
        else
            novoTotal = total+(total*0.04);
        break;
    }

    case 'P':
    {
        if(sexo=='F')
            novoTotal = total-(total*0.03);
        else
            novoTotal = total+(total*0.03);
        break;
    }

    case 'S':
    {
        if(sexo=='F')
            novoTotal = total-(total*0.02);
        else
            novoTotal = total+(total*0.02);
        break;
    }

    case 'T':
    {
        if(sexo=='F')
            novoTotal = total-(total*0.01);
        else
            novoTotal = total+(total*0.01);
        break;
    }
    }

    return novoTotal;
}
