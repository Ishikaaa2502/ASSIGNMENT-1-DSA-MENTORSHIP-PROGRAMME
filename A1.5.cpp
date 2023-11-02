#include <iostream>
using namespace std;
int main()
{   int x,i=0;
    cout<<"Enter a no.";
    cin>>x;
    while(x!=0)
    {   x=x/10;
        i++;
    }
    cout<<"counted digits in a number is "<<i;
    return 0;
}
