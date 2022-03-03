#include <iostream>
#define TAM 15

using namespace std;
float depositar(float saldoAtual, int conta);
float sacar (float saldoAtual, int conta);
void mostrarVetor(float V[TAM]);

//QUESTÃO 1 da Avaliação do dia 20/05/2021
//Camila Florão Barcellos

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int conta;
    float saldo0=0, saldo1=0, saldo2=0, saldo3=0, saldo4=0, saldo5=0, saldo6=0, saldo7=0, saldo8=0, saldo9=0, saldo10=0, saldo11=0, saldo12=0, saldo13=0, saldo14=0;
    char op;

    do
    {
        cout << "----------------------------" << endl;
        cout << "      -- BANCO VIP --       " << endl;
        cout << "----------------------------" << endl;
        cout << "  a- Depósito               " << endl;
        cout << "  b- Saque                  " << endl;
        cout << "  c- Listar contas          " << endl;
        cout << "  d- Listar juros devidos   " << endl;
        cout << "  e- Sair                   " << endl;
        cout << "----------------------------" << endl;
        cin >> op;
        op = toupper(op);

        switch(op)
        {
        case 'A':
            {
                do
            {
                cout << "\nInforme o número da conta (0-14): ";
                cin >> conta;

                if(conta<0 || conta>14)
                    cout << "Conta inválida!" << endl << endl;
            }
            while(conta<0 || conta>14);   //verificar validade da conta no intervalo

            switch(conta) //efetuar saldo na conta determinada
            {
            case 0:
                saldo0 = depositar(saldo0, conta); //saldoNovo
                break;
            case 1:
                saldo1 = depositar(saldo1, conta);
                break;
            case 2:
                saldo2 = depositar(saldo2, conta);
                break;
            case 3:
                saldo3 = depositar(saldo3, conta);
                break;
            case 4:
                saldo4 = depositar(saldo4, conta);
                break;
            case 5:
                saldo5 = depositar(saldo5, conta);
                break;
            case 6:
                saldo6 = depositar(saldo6, conta);
                break;
            case 7:
                saldo7 = depositar(saldo7, conta);
                break;
            case 8:
                saldo8 = depositar(saldo8, conta);
                break;
            case 9:
                saldo9 = depositar(saldo9, conta);
                break;
            case 10:
                saldo10 = depositar(saldo10, conta);
                break;
            case 11:
                saldo11 = depositar(saldo11, conta);
                break;
            case 12:
                saldo12 = depositar(saldo12, conta);
                break;
            case 13:
                saldo13 = depositar(saldo13, conta);
                break;
            case 14:
                saldo14 = depositar(saldo14, conta);
                break;
            }
            break;
            }

        case 'B':
            {
                do
            {
                cout << "\nInforme o número da conta (0-14): ";
                cin >> conta;

                if(conta<0 || conta>14)
                    cout << "Conta inválida!" << endl << endl;
            }while(conta<0 || conta>14);  //verificar validade da conta no intervalo

            switch(conta) //efetuar saque na conta determinada
            {
            case 0:
                saldo0 = sacar(saldo0, conta); //saldoNovo
                break;
            case 1:
                saldo1 = sacar(saldo1, conta);
                break;
            case 2:
                saldo2 = sacar(saldo2, conta);
                break;
            case 3:
                saldo3 = sacar(saldo3, conta);
                break;
            case 4:
                saldo4 = sacar(saldo4, conta);
                break;
            case 5:
                saldo5 = sacar(saldo5, conta);
                break;
            case 6:
                saldo6 = sacar(saldo6, conta);
                break;
            case 7:
                saldo7 = sacar(saldo7, conta);
                break;
            case 8:
                saldo8 = sacar(saldo8, conta);
                break;
            case 9:
                saldo9 = sacar(saldo9, conta);
                break;
            case 10:
                saldo10 = sacar(saldo10, conta);
                break;
            case 11:
                saldo11 = sacar(saldo11, conta);
                break;
            case 12:
                saldo12 = sacar(saldo12, conta);
                break;
            case 13:
                saldo13 = sacar(saldo13, conta);
                break;
            case 14:
                saldo14 = sacar(saldo14, conta);
                break;
            }
            break;
            }

        case 'C':
            {
            float V[15] {saldo0, saldo1, saldo2, saldo3, saldo4, saldo5, saldo6, saldo7, saldo8, saldo9, saldo10, saldo11, saldo12, saldo13, saldo14};
            cout << endl;

            int indiceV=0;
            float VAUX[indiceV];

            for(int i=0; i<14; i++)
            {
                if(V[i]<0)
                {
                    cout << "Conta " << i << " possui saldo: R$" << V[i] << endl;
                    VAUX[indiceV] = V[i]; //gravar no VAUX
                    indiceV++; //aumentar vetor VAUX
                }
            }


            float aux;
            bool trocou;
            do
            {
                trocou = false;
                for(int i=0; i<indiceV; i++)
                {
                    if(VAUX[i]<VAUX[i+1]) //identificar se o próximo valor é maior
                    {
                        aux = VAUX[i]; //guardar em auxiliar para fazer troca
                        VAUX[i] = VAUX[i+1]; //trocar ordem para deixar decrescente
                        VAUX[i+1] = aux;
                        trocou=true; //marcar que foi feita troca
                    }
                }
            }while(trocou=true);
            cout << "\nSaldos ordenados de modo decrescente:" << endl;
            mostrarVetor(VAUX);
            break;
            }

        case 'D':
            {
            float V2[15] {saldo0, saldo1, saldo2, saldo3, saldo4, saldo5, saldo6, saldo7, saldo8, saldo9, saldo10, saldo11, saldo12, saldo13, saldo14};
            float juros;
            cout << endl;
            for(int i=0; i<14; i++)
            {
                if(V2[i]<0)
                {
                    juros = V2[i]*0.03;
                    juros = juros*(-1); //converter valor para positivo
                    cout << "Juros cobrados sobre o saldo R$" << V2[i] << " da conta " << i << ": R$" << juros << endl;
                }
            }
            break;
            }

            case 'E':
                {
                    int sair;
                    do
                    {
                        cout << "\nConfirme a saída pressionando 1: ";
                        cin >> sair;

                        if(sair!=1)
                            cout << "Opção inválida, pressione 1" << endl;
                    }while(sair!=1);
                    break;
                }

        default:
            {
                cout << "Opção inválida\n";
                break;
            }
        }

        cout << endl;
        system("pause");
        system("cls");

    }while(op!='E');


}

float depositar(float saldoAtual, int conta)
{
    float saldoNovo, deposito;
    cout << "Insira o valor a ser depositado na conta " << conta << ": R$";
    cin >> deposito;

    if(deposito>0) //verificar se é valor positivo
    {
        saldoNovo = saldoAtual + deposito;
    }
    else //recusar depósito negativo/zerado
    {
        cout << "Valor inválido!" << endl;
    }

    return saldoNovo;
}

float sacar(float saldoAtual, int conta)
{
    float saldoNovo, saque;
    cout << "Insira o valor a ser sacado da conta " << conta << ": R$";
    cin >> saque;

    if(saque>0) //verificar se é saque válido e se há saldo disponível
        saldoNovo = saldoAtual - saque;
    else if(saque<=0) //recusar saque negativo/zerado
    {
        cout << "Valor inválido" << endl;
        saldoNovo = saldoAtual; //manter saldo pois não concluiu saque
    }

    return saldoNovo;
}

void mostrarVetor(float V[TAM])
{
    for(int i=0; i<TAM; i++)
    {
        cout << V[i];
        if(i<TAM)
            cout << ", ";
    }
    cout << endl;
}
