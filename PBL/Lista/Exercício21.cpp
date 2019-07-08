/*21. Faca um programa que receba do usuario dois vetores, A e B, com 10 numeros inteiros
cada. Crie um novo vetor denominado C calculando C = A - B. Mostre na tela os dados
do vetor C.*/
#include<iostream>
#include<locale.h>
using namespace std;
int main()
{
    int i, A[10], B[10], C[10];
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
    for(i=0;i<10;i++)
    {
        C[i]=A[i]-B[i];
    }
    cout<<"Os valores subtraídos ficam:\n";
    for(i=0;i<10;i++)
    {
        cout<<C[i]<<' ';
    }
}