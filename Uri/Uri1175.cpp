#include<iostream>
using namespace std;
int main(){
    int N[20],i,x;
    for(i=19;i>=0;i--)
    {
        cin>>x;
        N[i]=x;
    }
    for(i=0;i<20;i++)
    {
       cout<<"N["<<i<<"] = "<<N[i]<<endl;
    }
}