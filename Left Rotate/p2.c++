#include<iostream>
#include<vector>
using namespace std;

void Reverse(int arr[], int start, int end)
{
  while (start <= end)
  {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}

for(int i)


int main() {

int arr[7]={1,2,3,4,5,6,7};
int n=7;
int k=3;
  Reverse(arr,k,n-1);
  Reverse(arr,0,n-k-2);
  Reverse(arr, 0, n-1);


  for (int i = 0; i <7; i++) {
    cout << arr[i] << " ";
  }
return 0;
}