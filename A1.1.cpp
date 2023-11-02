#include<iostream>
using namespace std;
int main()
{
    int a,b,n=5;
    for(a=0;a<=n;a++)
    {
        for(b=0;b<=n;b++)
        {
            if(a==0 || a+b==n-1 || a==n-1)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
}
