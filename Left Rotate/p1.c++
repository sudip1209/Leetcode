#include<iostream>
using namespace std;

void rotate(int arr[],int size, int d) {
    int temp[size-1];
    int d=size%n;
    for(int i=0;i<n;i++)
    {
        temp[i]=arr[i];
    }
    for(int i=n;i<size;i++)
    {
        arr[i-n]=arr[i];
    }  
    int j=0;
    for(int i=size-n;i<size;i++)
    {
        arr[i]=temp[j];
        j++;
    }
}


int main() {

int arr[5]={1,2,3,4,5};
rotate(arr,5,3);

  for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
  }
return 0;
}