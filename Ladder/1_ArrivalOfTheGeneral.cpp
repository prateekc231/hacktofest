#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,min_ind,max_ind,cost,min_temp=101,max_temp=-1;
    cin>>n;
    vector<int> v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    for(i=0;i<n;i++){
        if(v[i]<=min_temp){
            min_ind=i;
            min_temp=v[i];
        }
    }
    for(i=n-1;i>=0;i--){
        if(v[i]>=max_temp){
            max_ind=i;
            max_temp=v[i];
        }
    }
    if(min_ind<max_ind){
        cost=max_ind+(n-min_ind-1)-1;
    }
    else
        cost=max_ind+(n-min_ind-1);
    cout<<cost;
}
