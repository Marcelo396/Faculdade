/*4. Faca um programa que leia um vetor de 8 posicoes e, em seguida, leia tambem dois valores
X e Y quaisquer correspondentes a duas posices no vetor. Ao final seu programa
dever a escrever a soma dos valores encontrados nas respectivas posicoes X e Y .*/
#include<iostream>
#include<locale.h>
#include<math.h>
using namespace std;
int main()
{
    int i, x, y, vetor[8], soma[2];
    setlocale(LC_ALL,"pt-Br");
    cout<<"Digite 8 valores."<<endl;
    for(i=0;i<8;i++)
    {
        cin>>vetor[i];
    }
    cout<<"Digite 2 valores que serão as respectivas posições do vetor."<<endl;
    cin>>x>>y;
    for(i=0;i<8;i++)
    {
        if(i==x)
        {
            cout<<"Vetor["<<i<<"] = "<<vetor[i]<<' ';
            soma[0]=vetor[i];
        }
        else
        {
            if(i==y)
            {
                cout<<"Vetor["<<i<<"] = "<<vetor[i]<<" e a soma desses = ";
                soma[1]=vetor[i];
            }
        }
        
    }
    cout<<soma[0]+soma[1]<<endl;
    return 0;
}