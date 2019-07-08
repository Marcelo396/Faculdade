/*13. Fazer um programa para ler 5 valores e, em seguida, mostrar a posicao onde se encontram
o maior e o menor valor.*/
#include<iostream>
#include<locale.h>
using namespace std;
int main()
{
    int aux, i, j, k, maior, menor, vetor[5];
    setlocale(LC_ALL,"Portuguese");
    cout<<"Digite 5 valores.\n";
    for(i=0;i<5;i++)
    {
        cin>>vetor[i];
    }
    for(j=0,k=j+1;k<5;k++)
    {
        if(vetor[j]<vetor[k])
        {
            j=k;
        }
    }
    maior=j;
    for(j=0,k=j+1;k<5;k++)
    {
        if(vetor[j]>vetor[k])
        {
            j=k;
        }
    }
    menor=j;
    cout<<"O maior valor esta em vetor["<<maior<<"] e o menor valor esta em vetor["<<menor<<"].\n";
    
}