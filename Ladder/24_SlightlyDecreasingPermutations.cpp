#include<bits/stdc++.h>

using namespace std;

int main(){
    int t,n,i;
    cin>>t>>n;
    for(i=0;i<n;i++){
        cout<<t<<" ";
        t--;
    }
    for(i=1;i<=t;i++){
        cout<<i<<" ";
    }
    cout<<endl;
}
