/*7. Escreva um programa que leia 10 números inteiros e os armazene em um vetor. Imprima
o vetor, o maior elemento e a posição que ele se encontra.*/
#include<iostream>
using namespace std;
int main()
{
    int posicao, maior, i, vetor[10];
    cout<<"Digite 10 valores inteiros que serão armazenados em um vetor.\n";
    for(i=0;i<10;i++)
    {
        cin>>vetor[i];
    }
    cout<<"\nO vetor digitado é o seguinte:\n";
    for(i=0,maior=i;i<10;i++)
    {
        cout<<"vetor["<<i<<"] = "<<vetor[i]<<endl;
        if(vetor[maior]<vetor[i+1]&&i<9)
        {
            maior=i+1;
            posicao = vetor[maior];
        }        
    }
    cout<<"\nO maior elemento é "<<vetor[maior]<<" e se encontra na posição vetor["<<maior<<"]"<<endl;
    return 0;
}