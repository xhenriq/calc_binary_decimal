#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;
int main()
{

    int valor;
    bool executa = true;
    int bin[8];

    while (executa)
    {

        cout << "Bem vindo a Calculadora de conversao\n" << endl;
        cout << "Escolha uma opcao\n" << endl;
        cout << "1- Decimal para Binario" << endl;
        cout << "2- Binario para Decimal" << endl;
        cout << "0- Sair do programa" << endl;

        //Vai receber e exibir na tela o valor digitado
        cin >> valor;

        if (valor == 0)       //Se o usuario digitar 0 a calculadora irá fechar
        {
            executa = false;
            exit;
        }
        else
        {
            if (valor == 1)
            {
                int decimal;
                cout << "1 - Decimal para Binario " << endl;
                cin >> decimal; // Vai receber o valor em decimal digitado
                for (int i = 7; i >= 0; i--)
                {
                    if (decimal % 2 == 0)
                    {
                        bin[i] = 0;
                    }
                    else
                    {
                        bin[i] = 1;
                    }
                    decimal = decimal / 2;
                }
                for (int i = 0; i < 8; i++)
                {
                    cout << bin[i];
                }
                cout << endl << "Digite um valor para continuar" << endl;
                cin >> valor;
            }
            else
            {
                if (valor == 2)
                {
                    int binario;
                    int dec = 0;
                    cout << "2 - Binario para Decimal" << endl;
                    cin >> binario;
                    for (int i = 0; binario > 0; i++) //Vai receber o número total do binário
                    {
                        dec = dec + pow(2, i) * (binario % 10);
                        binario = binario / 10;
                    }
                    cout << dec;
                    cout << endl << "Digite um valor para continuar" << endl;
                    cin >> valor;
                }
                else
                {
                    cout << "Opcao invalida, tente novamente!!! " << endl;
                }
            }
        }
    }
    return 0;
}
