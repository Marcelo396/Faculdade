/*12. Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores lidos
juntamente com o maior, o menor e a media dos valores.*/
#include<iostream>
#include<locale.h>
using namespace std;
int main ()
{
    int auxiliar, i, j, k, soma = 0, vetor[5];
    setlocale(LC_ALL,"Portuguese");
    for(i=0;i<5;i++)
    {
        cin>>vetor[i];
        soma = soma + vetor[i];
    }
    for(i=0;i<5;i++)
    {
        for(j=i,k=j+1;k<5;k++)
        {
            if(vetor[j]>=vetor[k])
            {
                auxiliar=vetor[j];
                vetor[j]=vetor[k];
                vetor[k]=auxiliar;
            }
        }
        auxiliar=vetor[i];
        vetor[i]=vetor[j];
        vetor[j]=auxiliar;
    }
    cout<<"Os valores lidos são:"<<endl;
    for(i=0;i<5;i++)
    {
        cout<<vetor[i]<<' ';
    }
    cout<<"O maior número é "<<vetor[4]<<", o menor número é "<<vetor[0]<<" e a média dos valores é "<<soma/5<<endl;
    return 0;
}
