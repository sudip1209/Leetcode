#include<iostream>
using namespace std;

//  ********* 
//   *******  
//    *****   
//     ***    
//      *    
void pattern(int n)
{
    for(int i=n-1;i>=0;i--)
    {
        for(int j=n-i-1;j>=0;j--)
        {
            cout<<" ";

        }
        for(int j=0;j<2*i+1;j++)
        {
            cout<<"*";

        }
        for(int j=n-i-1;j>=0;j--)
        {
            cout<<" ";

        }
           

        cout<<endl;
    }
    
}
int main()
{
    pattern(5);
    return 0;
} 