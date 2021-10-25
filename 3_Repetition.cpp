#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.length();
    int temp=1,ans=1;
    for(int i=1;i<n;i++){
        while(i<n && s[i]==s[i-1] ){
            i++;
            temp++;
        }
        if(s[i]!=s[i-1]){
            ans=max(ans,temp);
            temp=1;
        }
    }
    cout<<ans;

}
