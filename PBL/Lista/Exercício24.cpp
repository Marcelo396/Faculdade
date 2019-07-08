/*24. Faca um programa que leia dez conjuntos de dois valores, o primeiro representando o
numero do aluno e o segundo representando a sua altura em metros. Encontre o aluno
mais baixo e o mais alto. Mostre o numero do aluno mais baixo e do mais alto, juntamente
com suas alturas.*/
#include<iostream>
#include<locale.h>
using namespace std;
int main()
{
    int i, j, k, troca, numero[10];
    double n, aux, altura[10];
    setlocale(LC_ALL,"pt-Br");
    cout<<"Digite o número e a altura dos alunos.\n";
    for(i=0;i<10;i++)
    {
        cout<<"\nAluno "<<i+1<<endl;
        cout<<"Numero: ";
        cin>>numero[i];
        cout<<"Altura: ";
        cin>>altura[i];
    }
    for(i=0;i<10;i++)
    {
        for(j=i,k=j+1;k<10;k++)
        {
            if(altura[j]>altura[k])
            {
                aux=altura[j];
                altura[j]=altura[k];
                altura[k]=aux;
                troca=numero[j];
                numero[j]=numero[k];
                numero[k]=troca;
            }
        }
        aux=altura[i];
        altura[i]=altura[j];
        altura[j]=aux;
        troca=numero[i];
        numero[i]=numero[j];
        numero[j]=troca;
    }
    cout<<"O aluno de número "<<numero[0]<<" e altura "<<altura[0]<<" é o mais baixo.\n";
    cout<<"O aluno de número "<<numero[9]<<" e altura "<<altura[9]<<" é o mais alto.\n";
    return 0;
}