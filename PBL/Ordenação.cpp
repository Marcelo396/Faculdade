#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
    int const Size = 100;
    int i, j, k, n, aux, V[Size];
    system("clear");
    setlocale(LC_ALL, "pt-Br");
    cout << "Digite o valor total, menor que 100, de números que serão ordenado.\n";
    cin >> n; //Leitura da quantidade de valores que serão ordenados.
    system("clear");
    for (i = 0; i < n; i++)
    {
        cin >> V[i];
    }
    /*Finalizado a leitura do vetor, agora será realizada a ordenação */
    /*criar um marcador "j" para cada valor maior que o atual "i" e um comparador "k".
        Sempre que um valor for menor que marcador "j" atribuí-lo a "i" enquanto "k" pergunta em 
    cada posição se o valor na posição"k" é menor que o valor na posição "j". */
    for (i = 0; i < n; i++)
    {
        if (i < n - 1)
        {
            for (j = i + 1, k = j; k < n; k++)
            {
                if (V[j] >= V[k])
                {
                    /*É garantido que o valor na posição "j" é maior que o valor na posição "k".*/
                    aux = V[j];
                    V[j] = V[k]; /*Valor na posição da variável atual recebe valor da variável marcador.*/
                    V[k] = aux;
                }
            }
            aux=V[i];
            V[i]=V[j];
            V[j]=aux;
        }      
    }
    system("clear");
    for (i = 0; i < n; i++)
    {
        cout << V[i] << ' ';
    }
    return 0;
}