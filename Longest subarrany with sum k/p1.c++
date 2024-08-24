#include <iostream>
using namespace std;


int lenOfLongSubarr(int arr[], int n, int k) {

        int sum;
        int lng = 0;
        for(int i=0;i<n;i++)
        {   sum=0;
            for(int j=i;j<n;j++)
            {
                sum+=arr[j];
                if(sum==k)
                    lng=j;
                else if(sum>k)
                    break;
            }
        }
        // Function implementation goes here
        // This is just a placeholder return value.
        return lng;
};

int main() {
    // int t;
    // cin >> t;
    // while (t--) {
    //     int n, k;
    //     cin >> n >> k;
    //     int* a = new int[n]; // Dynamic array allocation

    //     for (int i = 0; i < n; i++)
    //         cin >> a[i];

    //     Solution ob;
    //     cout << ob.lenOfLongSubarr(a, n, k) << endl;

    //     delete[] a; // Don't forget to free the memory
    // }

    int arr[6] = {10, 5, 2, 7, 1, 9};

    cout<<lenOfLongSubarr(arr,6,15);
    return 0;
}
