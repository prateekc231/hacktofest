#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t,j;
    int i;
    cin>>s>>t;
    //cout<<s<<"-"<<t;
    for(i=0;i<s.length();i++){
        if(int(s[i])==int(t[i])){
            j=j+'0';
        }
        else
            j=j+'1';
    }
    cout<<j;
}
