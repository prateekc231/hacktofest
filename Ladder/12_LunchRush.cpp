#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,fun=0,i,temp=0;
    bool first=true;
    cin>>n>>k;
    int arr[n][2];
    for(i=0;i<n;i++){
        cin>>arr[i][0]>>arr[i][1];
    }
    for(i=0;i<n;i++){
        if(arr[i][1]<=k){
            temp=arr[i][0];
        }
        else
        {
             temp=arr[i][0]-(arr[i][1]-k);
        }
        if(first==true){
            fun=temp;
            first=false;
        }
        else if(temp>fun)
            fun=temp;
    }
    cout<<fun;
}
