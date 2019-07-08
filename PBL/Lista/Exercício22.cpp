/*22. Faca um programa que leia dois vetores de 10 posicoes e calcule outro vetor contendo,
nas posicoes pares os valores do primeiro e nas posicoes impares os valores do segundo.*/
#include<iostream>
#include<locale.h>
using namespace std;
int main()
{
    int i,j, A[10], B[10], C[20];
    setlocale(LC_ALL,"portuguese");
    cout<<"Digite 10 valores para o primeiro vetor.\n";
    for(i=0;i<10;i++)
    {
        cin>>A[i];
    }
    cout<<"Digite 10 valores para o segundo vetor.\n";
    for(i=0;i<10;i++)
    {
        cin>>B[i];
    }
    for(i=j=0;i<20;i+=2,j++)
    {
        C[i]=A[j];
    }
    for(i=1,j=0;i<20;i+=2,j++)
    {
        C[i]=B[j];
    }
    cout<<"Os valores digitados, com o primeiro vetor nas posições pares e o segundo nas posições ímpares, são:\n";
    for(i=0;i<20;i++)
    {
        cout<<C[i]<<' ';
    }
}