#include<bits/stdc++.h>
using namespace std;
int main(){
    long n,sum=0;
    cin>>n;
    long arr[n];
    for(long i=0;i<n;i++){
        cin>>arr[i];
    }
    for(long i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1]){
            long def=arr[i-1]-arr[i];
            sum+=def;
            arr[i]=arr[i-1];
        }
    }
    cout<<sum;

}
