/*Ler um conjunto de numeros reais, armazenando-o em vetor e calcular o quadrado das
componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos tem
10 elementos cada. Imprimir todos os conjuntos.*/
#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;
int main()
{
    int i;
    double vetor[10], quadrado[10];
    setlocale(LC_ALL,"pt-Br");
    cout<<"Insira 10 valores com casas decimais"<<endl;
    for(i=0;i<10;i++)
    {
        cin>>vetor[i];
        quadrado[i]=pow(vetor[i],2);
    }
    cout<<"O novo conjunto de valores ao quadrado é:"<<endl;
    for(i=0;i<10;i++)
    {
        cout<<quadrado[i]<<' ';
    }
    return 0;
}