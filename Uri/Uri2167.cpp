#include<iostream>
using namespace std;
int main()
{
    int n, i, x=0, R[10000];
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>R[i];
    }

    for(i=1;i<=n;i++)
    {
        if(R[i]>=R[i-1])
        {
            x++;
        }
        else
        {
            if(R[i]<R[i-1])
            {
                cout<<i<<endl;
                i=n+1;
            }
        }
        
    }
    if(x==n)
    {
        cout<<"0"<<endl;
    }
}