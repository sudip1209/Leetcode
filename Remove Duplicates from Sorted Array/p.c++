#include <iostream>
#include <vector>
#include <set>
using namespace std;

// int removeDuplicates(
//     vector<int> &arr, int n) {
//     // Declare a set to store unique elements
    
//     set<int> st;

//     // Insert elements from the array into the set
//     for(int i = 0; i < n; i++) {
//         st.insert(arr[i]);
//     }

//     // Copy the unique elements back to the array
//     int index = 0;
//     for(auto it : st) {
//         arr[index] = it;
//         index++;
//     }

//     // Return the number of unique elements
//     return index;
// }


int removeDuplicates(vector<int> &arr, int n) {

    int i=0,j=1;
    for(j;j<n;i++)
    {
        if(arr[i] !=arr[j])
        {
            arr[i]=arr[j];
            i++;
        }
    }
    return i+1;

}


int main() {
    // Example usage
    
    vector<int> arr = {1, 1, 2, 2, 3, 4, 4, 5};
    int n = arr.size();

    
    cout << "Original array:\n";
    for (int num : arr) {
        
        cout << num << " ";
    }
    
    cout << "\n";

    // Call the function to remove duplicates
    int uniqueCount = removeDuplicates(arr, n);

    
    cout << "Array after removing duplicates:\n";
    for (int i = 0; i < uniqueCount; ++i) {
        
        cout << arr[i] << " ";
    }
    
    cout << "\n";

    
    cout << "Number of unique elements: " << uniqueCount << "\n";

    return 0;
}
