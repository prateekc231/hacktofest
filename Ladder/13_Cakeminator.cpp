#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,c,i,j,cR=0,rR=0,ans;
    cin>>r>>c;
    char k;
    vector<bool> row(r,true);
    vector<bool> col(c,true);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
        {
            cin>>k;
            if(k=='S'){
                row[i]=false;
                col[j]=false;
            }
        }
    }
    for(i=0;i<r;i++){
        if(row[i]==true)
            rR++;
    }

    for(i=0;i<c;i++){
        if(col[i]==true)
            cR++;
    }
    ans= (rR*c)+(cR*r)-(cR*rR);
    cout<<ans;

}
