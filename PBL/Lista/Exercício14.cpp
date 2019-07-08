/*14. Faca um programa que leia um vetor de 10 posicoes e verifique se existem valores iguais
e os escreva na tela.*/
#include<iostream>
#include<locale.h>
using namespace std;
int main()
{
    int i, j, k=0, l, igual[10], vetor[10];
    setlocale(LC_ALL,"portuguese");
    cout<<"Digite 10 valores.\n";
    for(i=0;i<10;i++)
    {
        cin>>vetor[i];
    }
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(vetor[i]==vetor[j])//isto é verdade!!
            {
                for(l=0;l<=k&&igual[l]!=igual[l-1];l++)
                {
                    if(igual[l]!=vetor[j])
                    {
                        igual[k]=vetor[i];
                        k++;
                    }
                }
            }
        }
    }
    cout<<"Existe(m) valor(es) igua(is) à:\n";
    for(i=0;i<k;i++)
    {
        cout<<igual[i]<<' ';
    }
}