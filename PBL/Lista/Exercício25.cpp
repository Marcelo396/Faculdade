/*25. Faca um programa que preencha um vetor de tamanho 100 com os 100 primeiros naturais
que nao sao multiplos de 7 ou que terminam com 7.*/
#include<iostream>
#include<locale.h>
using namespace std;
int main()
{
    int i, j=0, n, vetor[100];
    setlocale(LC_ALL,"pt-Br");
    cout<<"Digite os 100 primeiros números naturais.\n";
    for(i=0;i<100||i<100-j;i++)
    {
        cin>>n;
        if(n%7!=0)
        {
            vetor[i]=n;
        }
        else
        {
            if(n%7==0)
            {
                j++;
            }
        }
        
    }
    return 0;
}