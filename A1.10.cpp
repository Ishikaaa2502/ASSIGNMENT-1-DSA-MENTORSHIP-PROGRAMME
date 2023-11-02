#include<iostream>
using namespace std;
int main() 
{
    int n;
    cout<<"enter the no";
    cin>>n;
    cout<<"Its prime factorization is";
    for(int i=2; i<=n; i++)
    {
        while(n%i==0)
        { 
            cout<<i<<endl;
            n=n/i;
        }
    }
    return 0;
}
