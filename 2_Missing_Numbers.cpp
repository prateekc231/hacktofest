#include<bits/stdc++.h>
using namespace std;
int main(){
    long n;
    cin>>n;
    long sum=0;
    int arr[n];
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    long res= n*(n+1)/2;
    cout<<res-sum;

}

