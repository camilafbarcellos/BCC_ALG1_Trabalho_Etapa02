#include <iostream>

using namespace std;
char calcClass(int ano);
float calcVenda(char classi, float valor);

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int ano;
    float valor;

    cout << "Informe o ano de fabricação do veículo: ";
    cin >> ano;
    cout << "Informe o preço que deseja receber pelo veículo: R$";
    cin >> valor;

    char classi = calcClass(ano);
    switch(classi)
    {
    case 'N':
        cout << "\nClassificação do seu veículo: NOVO (N)" << endl;
        break;
    case 'S':
        cout << "\nClassificação do seu veículo: SEMINOVO (S)" << endl;
        break;
    case 'U':
        cout << "\nClassificação do seu veículo: USADO (U)" << endl;
        break;
    }

    float precoVenda = calcVenda(classi, valor);
    cout << "Valor de venda do veículo: R$" << precoVenda << endl;

}

char calcClass(int ano)
{
    char classi;

    if(ano==2021)
        classi = 'N';
    else if(ano==2021-1 || ano==2021-2 || ano==2021-3)
        classi = 'S';
    else if(ano<(2021-3))
        classi = 'U';

    return classi;
}

float calcVenda(char classi, float valor)
{
    float precoVenda;

    switch(classi)
    {
    case 'N':
        precoVenda = valor*1.05;
        break;
    case 'S':
        precoVenda = valor*1.15;
        break;
    case 'U':
        precoVenda = valor*1.25;
        break;
    }

    return precoVenda;
}
