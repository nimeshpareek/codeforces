#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;

// 13 
// 1 3 5 7 9 11 13 2 4  6  8  10 12    
//                 1 2  3  4  5  6
// 1 2 3 4 5 6  7  8 9  10 11 12 13

// 10th position
// first half = as this is odd no. 13/2 = 6.5 + 1 = 7
// as position is not under first half so we do position - first half = 10 - 7 = 3 now double the no.

// 4th position
// first half = 7 
// now as position is under first half so we do 2*position -1

// 10
// 1 3 5 7 9 2 4 6 8 10

// 8 
// 1 3 5 7 2 4 6 8
int main()
{
int number, position;
cin >> number >> position;
int first_half;
if (number %2 == 0)
{
    first_half = number/2;
}
else
{
    first_half = number/2 + 1;
}
// int new_position;
int ans;
if (position > first_half)
{
    ans = (position - first_half)*2;
    // ans = new_position*2;
}
else
{
    ans = (2*position)-1;
}

cout <<  ans << endl;

return 0;
}