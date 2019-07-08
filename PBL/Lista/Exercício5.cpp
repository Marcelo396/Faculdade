/*5. Leia um vetor de 10 posicoes. Contar e escrever quantos valores pares ele possui.*/
#include<iostream>
#include<locale.h>
using namespace std;
int main()
{
    int i, contador = 0, vetor[10];
    setlocale(LC_ALL,"Portuguese");
    cout<<"Digite 10 valores.\n";
    for(i=0;i<10;i++)
    {
        cin>>vetor[i];
        if(vetor[i]%2==0)
        {
            contador++;
        }
    }
    cout<<"De 10 valores este vetor possui "<<contador<<" par(es).\n";
    return 0;
}