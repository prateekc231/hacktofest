#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        double n;
        cin>>n;
        double f=floor(360.0/(180-n));
        double c=ceil(360/(180-n));
        //cout<<f<<"-"<<c<<endl;
        if(f==c){
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }


}
