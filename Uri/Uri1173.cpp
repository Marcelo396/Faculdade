#include <iostream>
using namespace std;
int main(){
    int N[10], i, x, v;
    cin>>v;
    x=v;
    for(i=0;i<10;i++)
    {
        cout<<"N["<<i<<"] = "<<x<<endl;
        x=x*2;
    }
}