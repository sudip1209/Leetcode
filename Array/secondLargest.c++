#include<iostream>
using namespace std;

// int second(int a[],int n)
// {
    
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n-i-1;j++)
//         {
//             if(a[j]>a[j+1])
//                 swap(a[j],a[j+1]);
//         }
//     }
//     int largest=a[n-1];
//     int secondLargest=-1;
//     for(int i=n-2;i>=0;i--)
//     {
//         if(a[i]!=largest)
//         {
//             secondLargest=a[i];
//             break;
//         }
//     }
//     return secondLargest;

// }


// int second(int a[],int n)
// {
    
// int max=a[0];
// int secondLargest=-1;
// for(int i=0;i<n;i++)
// {
//     if(a[i]>max)
//         max=a[i];
// }
// for(int i=0;i<n;i++)
// {
//     if(a[i]>a[i+1] && a[i+1]<max)
//         secondLargest=a[i];
// }
// return secondLargest;


// }

int second(int a[],int n)
{
    
int max=a[0];
int secondLargest=INT_MIN;
for(int i=1;i<n;i++)
{
    if(a[i]>max)
    {
        secondLargest=max;
        max=a[i];
    }

    else if(a[i]<max && a[i]> secondLargest)
        secondLargest=a[i];
}

return secondLargest;


}
int secondSmall(int a[],int n)
{
    
int max=a[0];
int secondLargest=INT16_MIN;
for(int i=1;i<n;i++)
{
    if(a[i]<max)
    {
        secondLargest=max;
        max=a[i];
    }

    else if(a[i]>max && a[i]< secondLargest)
        secondLargest=a[i];
}
return secondLargest;


}

int main()
{
    int arr1[8] = {12, 35,35,35, 1, 10, 34, 1};
    int arr2[2]= {10, 10};

cout<< secondSmall(arr1,8);
    // second(arr1,6);
    return 0;
}