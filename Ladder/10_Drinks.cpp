#include<bits/stdc++.h>
using namespace std;
int main(){
        int n,i,temp=0,k;
        cin>>n;
        for(i=0;i<n;i++){
            cin>>k;
            temp=temp+k;
        }
        double ans=double(temp)/double(n);
        cout<<fixed<<setprecision(4);
        cout<<ans;
}
