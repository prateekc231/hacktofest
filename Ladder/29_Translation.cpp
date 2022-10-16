#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,k;
    cin>>s>>k;
    int n=s.length(),flag=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==k[n-i-1])
        {
            continue;
        }
        else{
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"NO";
    }
    else
        cout<<"YES";
    return 0;
}
