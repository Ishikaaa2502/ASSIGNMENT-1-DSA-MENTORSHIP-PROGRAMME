#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<" Enter the marks";
    cin>>a;
    if(a>90) { cout<<"outstanding";}
    else if(a>80) { cout<<"good";}
    else if(a>60) { cout<<"average";}
    else if(a>50) { cout<<"meets expectations";}
    else cout<<"below average";
    return 0;
}
