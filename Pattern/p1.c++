#include<iostream>
using namespace std;

// * * * *
// * * * *
// * * * *
// * * * *
// * * * *

void pattern(int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cout<<" * ";

        cout<<endl;
    }
    
}
int main()
{
    pattern(2,4);
    return 0;
}