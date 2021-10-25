#include<bits//stdc++.h>
using namespace std;
int main(){
    int n,ans=0,i;
    cin>>n;
    string s;
    cin>>s;
    for(i=1;i<n;i++){
        if(s[i]==s[i-1])
        ans++;
    }
    cout<<ans;
}
