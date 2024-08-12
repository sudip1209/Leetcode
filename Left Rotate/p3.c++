#include<iostream>
using namespace std;

void rotate(int arr[],int size, int n) {
    int temp[n-1];
    for(int i=n;i<size;i++)
    {
        temp[i]=arr[i];
    }
    for(int i=size;i>=n;i++)
    {
        arr[i-size]=arr[i];
    }  
    int j=0;
    for(int i=size-n;i<size;i++)
    {
        arr[i]=temp[j];
        j++;
    }

    // for (int i =0; i <size; i++) {
    //     cout << arr[i] << " ";
    // }
}


int main() {

int arr[5]={1,2,3,4,5};
rotate(arr,5,3);

  for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
  }
return 0;
}