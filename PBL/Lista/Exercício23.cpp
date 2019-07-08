/*23.Ler dois conjuntos de numeros reais, armazenando-os em vetores e calcular o produto
escalar entre eles. Os conjuntos tem 5 elementos cada. Imprimir os dois conjuntos e o
produto escalar, sendo que o produto escalar e dado por: x1 * y1 + x2 * y2 + ::: + xn * yn.*/
#include<iostream>
#include<locale.h>
using namespace std;
int main()
{
    int i, j, x[5], y[5], prod =0;
    double n, aux;
    setlocale(LC_ALL,"portuguese");
    cout<<"Digite 5 valores reais.\n";
    for(i=0;i<5;i++)
    {
        cin>>n;
        j=n;
        aux=j;
        x[i]=n;
        y[i]=(n-aux)*10;
        prod = prod + x[i]*y[i];
    }
    cout<<"O produto escalar dos valores digitados são:\n";
    for(i=0;i<5;i++)
    {
        cout<<"x"<<i+1<<" * y"<<i+1;
        if(i<4)
        {
            cout<<" + ";
        }
        else
        {
            if(i==4)
            {
                cout<<" = ";
            }
        }
        
    }
    cout<<prod<<endl;
    return 0;
}