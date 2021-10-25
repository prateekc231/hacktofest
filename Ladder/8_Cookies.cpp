#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,eve=0,odd=0,k;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>k;
        if(k%2==0)
            eve++;
        else
            odd++;
    }
    if(odd%2==0){
        cout<<eve;
    }
    else
        cout<<odd;
}
