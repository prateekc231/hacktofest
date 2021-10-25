#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j=0,n,k;
    cin>>n>>k;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){
                cout<<k<<" ";
                    }
            else
                cout<<0<<" ";
        }
        cout<<endl;
    }
}
