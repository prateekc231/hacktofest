#include<bits/stdc++.h>
using namespace std;
int main(){
    long n,i,min_rat=-1,max_rat=-1,ans=0;
    cin>>n;
    long arr[n];
    cin>>arr[0];
    min_rat=arr[0];
    max_rat=arr[0];
    for(i=1;i<n;i++){
        cin>>arr[i];
        if(arr[i]<min_rat || arr[i]>max_rat){
            ans++;
            if(arr[i]<min_rat)
                min_rat=arr[i];
            else
                max_rat=arr[i];
        }
    }
    cout<<ans;
}
