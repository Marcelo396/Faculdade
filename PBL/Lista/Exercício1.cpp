/*1. Faca um programa que possua um vetor denominado A que armazene 6 numeros inteiros.
O programa deve executar os seguintes passos:
(a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
(b) Armazene em uma variavel inteira (simples) a soma entre os valores das posicoes
A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
(c) Modifique o vetor na posicao 4, atribuindo a esta posicao o valor 100.
(d) Mostre na tela cada valor do vetor A, um em cada linha.*/
#include<iostream>
#include<locale.h>
using namespace std;
int main ()
{
    int i, s=0, A[6] = {1, 0, 5, -2, -5, 7};
    setlocale(LC_ALL,"Portuguese");
    cout<<"Valores (1, 0, 5, -2, -5, 7), foram inseridos no Vetor A."<<endl;
    for(i=0;i<6;i++)
    {
        if(i==0 || i==1 || i==5)
        {
            s=s+A[i];
        }
        else
        {
            if(i==4)
            {
                A[i]=100;
            }
        }
        
    }
    cout<<"\nA soma do vetor A na posição A[0], A[1] e A[5] = "<<s<<endl;
    cout<<"\nO novo vetor A é igual à:"<<endl;
    for(i=0;i<6;i++)
    {
        cout<<A[i]<<' ';
    }
    return 0;
}