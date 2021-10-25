//1 2 3 4 5 6
#include<bits/stdc++.h>
using namespace std;
int main(){
    long n;
    cin>>n;
    if(n==1)
    {
        cout<<"1";
        return 0;
    }
    else if(n==4){
        cout<<"2 4 1 3";
    }
    else if(n==2 || n==3 ){
        cout<<"NO SOLUTION";
        return 0;
    }
    else{
        for(long i=1;i<=n;i=i+2){
            cout<<i<<" ";
        }
        for(long i=2;i<=n;i=i+2){
            cout<<i<<" ";
        }
    }
}
