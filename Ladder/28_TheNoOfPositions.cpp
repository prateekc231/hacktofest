#include<bits/stdc++.h>
using namespace std;
int main(){
    int s,k,m;
    cin>>s>>k>>m;
    int temp=(s-k);
    if(temp>m+1){
        cout<<(m+1);
    }
    else
    cout<<temp;
    return 0;
}
