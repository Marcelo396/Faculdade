/*Vetores*/
#include<iostream>
#include<locale.h>
using namespace std;
int main(){
    int aux, i, j, k, vetor[10];/* i = incremento normal de um vetor. j = a posição i + 1, que usarei para apontar o maior em um vetor e o menor em outro.
     k = é a variável que usarei para ir procurando os valores menores que os ja lidos */
    for(i=0;i<10;i++)
    {
        cin>>vetor[i];
    }/*Realizei a leitura do vetor com dez valores "que não sei quais são". */


    for(i=0;i<10;i++)
    {
        for(j=i,k=j+1;k<10;k++)
        {
             if(vetor[j]>=vetor[k])/*O erro estava aqui, estava comparando e trocando o maior ao invés do menor. */
             {
                   aux = vetor[j];
                   vetor[j] = vetor[k];
                   vetor[k] = aux;
             }
         }
        aux = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = aux;
    }
    setlocale(LC_ALL, "pt-Br");
    cout<<"O maior número é "<<vetor[9]<<" e o menor número é o "<<vetor[0]<<endl;
}