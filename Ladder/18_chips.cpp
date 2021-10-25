#include<bits/stdc++.h>
using namespace std;
int main(){
    long n,k,temp,i=1;
    cin>>n>>k;
    temp=(n*(n+1))/2;
    temp=k%temp;
    while(1){
        if(temp>=i){
            temp=temp-i;
            i++;
        }
        else{
            break;
        }
    }
    cout<<temp;
}
