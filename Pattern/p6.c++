#include<iostream>
using namespace std;

// * * * * * 
// * * * * 
// * * * 
// * * 
// * 

void pattern(int n)
{
    for(int i=n ;i>0;i--)
    {
        for(int j=1;j<=i;j++)
            cout<< j ;

        cout<<endl;
    }
    
}

int main()
{
    pattern(5);
    return 0;
}
