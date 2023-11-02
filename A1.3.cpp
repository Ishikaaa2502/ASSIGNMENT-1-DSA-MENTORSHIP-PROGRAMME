#include <iostream>
using namespace std;
int main()
{
    int t,n;
    cout<<"How many numbers do you want to test?\n";
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cout<<"Enter your number\n";
        cin>>n;
        for(int j=2; j<n; j++)
        {
            if(n%j==0) {cout<<"Not prime\n"; break;}
            else if(n%j!=0 && j==n-1) {cout<<"Prime \n";}
        }
    }
    return 0;
}
