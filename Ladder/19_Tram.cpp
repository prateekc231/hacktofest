#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,temp=0,ans=0;
    cin>>n;
    int up[n][2];
    for(i=0;i<n;i++){
        cin>>up[i][0]>>up[i][1];
    }
    for(i=0;i<n;i++){
        temp=temp-up[i][0]+up[i][1];
        if(temp>ans)
            ans=temp;
    }
    cout<<ans;

}
