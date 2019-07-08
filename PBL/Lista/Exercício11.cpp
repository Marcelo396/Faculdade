/*11. Faca um programa que preencha um vetor com 10 numeros reais, calcule e mostre a
quantidade de numeros negativos e a soma dos numeros positivos desse vetor.*/
#include<iostream>
#include<locale.h>
using namespace std;
int main()
{
    int i, contador_de_negativos=0;
    double s=0, vetor[10], soma[10];
    setlocale(LC_ALL,"Portuguese");
    cout<<"Digite 10 valores reais.\n";
    for(i=0;i<10;i++)
    {
        cin>>vetor[i];
        if(vetor[i]<0)
        {
            contador_de_negativos++;
        }
        else
        {
            if(vetor[i]>0)
            {
                s=s+vetor[i];
            }
        }
        
    }
    cout<<"A quantidade de números negativos é "<<contador_de_negativos<<endl;
    cout<<"O resultado da soma dos números positivos é "<<s<<endl;
    return 0;
}