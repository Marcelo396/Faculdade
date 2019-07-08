/*2. Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela os valores lidos.*/
#include<iostream>
#include<locale.h>
using namespace std;
int main()
{
    int i, vetor[6];
    setlocale(LC_ALL,"pt-Br");
    cout<<"Insira 6 valores inteiros."<<endl;
    for(i=0;i<6;i++)
    {
        cin>>vetor[i];
    }
    cout<<"\nOs valores digitados são:"<<' ';
    for(i=0;i<6;i++)
    {
        cout<<vetor[i]<<' ';
    }
    cout<<endl;
    return 0;
}