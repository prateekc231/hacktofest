#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,i,sum=0;

    cin>>n>>k;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    if(arr[0]<0)
        sum=abs(arr[0]);
    for(i=1;i<k;i++){
        if(arr[i]>0)
        break;
        sum+=abs(arr[i]);
    }
    cout<<sum;
}
