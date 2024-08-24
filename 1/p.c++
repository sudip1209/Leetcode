#include<vector>
#include<iostream>
using namespace std;

void remove(vector<int> a) {
int i;
int j;
for(i=0;i<a.size();i++)
{
    for(j=i+1;j<a.size();j++)
    {
        if(a[i]==a[j])
        {
            return a[i];
        }
    }
}
return -1;
}


int main()
{

        int n = 3;

    // Create a vector of size n with
    // all values as 10.
    vector<int> arr(n, 10);
    // vector<int> arr{ 1,2,3,4,5,6,6};
    cout<<remove(arr);

    // int n = 10;
    // vector<int> ans = moveZeros(n, arr);
    // for (auto &it : ans) {
    //     cout << it << " ";
    // }
    // cout << '\n';
    return 0;
}

