#include<bits/stdc++.h>
using namespace std;

bool check(int num, int rem){
int count=0;
    while (num!=0)
    { 
        rem = num%10;
        if(rem != 4 && rem != 7){
            return false;
            break;
        }
        num = num/10;
    }
    return true;
}
int main()
{
int num;
cin >> num;

if(num%4==0){
    cout << "YES" << endl;
}
else if(num %7 == 0){
    cout << "YES" << endl;
}
else{
    int r;
    if(check(num,r)==0){
        cout << "NO" << endl;
    }     
    else{
        cout << "YES" << endl;
    }
}
return 0;
}