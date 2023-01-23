#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ix,jx;
    int arr[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
            if(arr[i][j] == 1){
                ix = i;
                jx = j;
            }
        }   
    }

    int count=0;
    // cout <<  "ix is : " << ix  << endl;
    while (ix != 2)
    {
        if (ix<2)
        {
            ix++;
            count++;
        }
        else
        {
            ix--;
            count++;
        }
    }

     while (jx != 2)
    {
        if (jx<2)
        {
            jx++;
            count++;
        }
        else
        {
            jx--;
            count++;
        }
        
    }
    cout << count << endl;


    


    
return 0;
}