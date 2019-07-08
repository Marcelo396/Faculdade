/*15. Leia um vetor com 20 numeros inteiros. Escreva os elementos do vetor eliminando elementos repetidos.*/
#include<iostream>
using namespace std;
int main()
{
    int i, j, k, l=0, vetor[20], Eliminado[20];
    for(i=0;i<20;i++)
    {
        cin>>vetor[i];
    }
    for(i=0;i<20;i++)
    {
        for(j=i,k=j+1;k<20;j++,k++)/*Comparar todos os elementos do vetor Eliminado verificando se em todas as posições não existe número repetido */
        {
            if(vetor[j]==vetor[k]&&(vetor[j]||vetor[k])!=0)
            {
                vetor[k]=0;
            }
        }
    }
    cout<<"Vetores não repetidos.\n";
    for(i=0;i<20;i++)
    {
        if(vetor[i]!=0)
        cout<<Eliminado[i]<<' ';
    }

}