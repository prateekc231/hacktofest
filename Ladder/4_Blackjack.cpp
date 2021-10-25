#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[11];
    for(int i=0;i<11;i++)
        arr[i]=4;
    arr[9]=15;
    int n;
    cin>>n;
    n=n-10;
    if(n<=0 || n>11){
        cout<<0;
    }
    else
        cout<<arr[n-1];
}
