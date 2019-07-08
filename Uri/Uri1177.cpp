#include<iostream>
using namespace std;
int main()
{
    int N[1000],i,T,x;
    cin>>T;
    for(i=0;i<1000;)
    {
        for(x=0;x<T&&i<1000;i++,x++)
        {
            cout<<"N["<<i<<"] = "<<x<<endl;
        }
    }
}