/*Faça um programa que receba do usuário um vetor com 10 posições. Em seguida deverá
ser impresso o maior e o menor elemento do vetor.*/
#include<iostream>
using namespace std;
int main()
{
    int aux, i, j, k, vetor[10];
    for(i=0;i<10;i++)
    {
        cin>>vetor[i];
    }
    for(i=0;i<10;i++)
    {
        for(j=i,k=j+1;k<10;k++)
        {
            if(vetor[j]>=vetor[k])
            {
                aux=vetor[j];
                vetor[j]=vetor[k];
                vetor[k]=aux;
            }
        }
        aux=vetor[i];
        vetor[i]=vetor[j];
        vetor[j]=aux;
    }
    cout<<"\nO maior elemento é "<<vetor[9]<<" e o menor elemento é "<<vetor[0]<<endl;
    return 0;
}