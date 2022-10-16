#include<bits/stdc++.h>
using namespace std;
int main(){
    double n,x,y;
    cin>>n>>x>>y;
    int temp = ceil(y*n/100);
    if(temp-int(x)>0)
    cout<<temp-int(x);
    else
        cout<<0;
}
