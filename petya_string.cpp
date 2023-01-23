#include <bits/stdc++.h>
using namespace std;
int check(string s, string s1){
    for(int i=0;i<s.size();i++){
        if(s[i]-'a'>s1[i]-'a'){
            return 1;
        }else if(s[i]-'a'<s1[i]-'a'){
            return -1;
        }
    }
    return 0;
}
int main() {
	    string str,str2;
	    cin>>str;
        cin>>str2;
	     transform(str.begin(), str.end(), str.begin(), ::tolower);
         transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
         int c = check(str,str2);
	    cout<<c<<endl;
	return 0;
}
