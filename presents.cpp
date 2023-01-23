#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr[i] = arr[i] - 1;
    }

    // 1 2 3 0
    //
    //  for(int i=0;i<n;i++){
    //     cout << "arr is "<< arr[i] << " ";
    // }
    int temp[n];
    // cout << endl;
    for (int i = 0; i < n; i++)
    {
        int x = arr[i];
        temp[x] = i + 1;
    }

    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }

    return 0;
}