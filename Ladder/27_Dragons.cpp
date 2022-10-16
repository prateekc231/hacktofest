#include<bits/stdc++.h>
using namespace std;
int main(){
    int s,k,i,t,x,flg=1;
    cin>>s>>k;
    vector<pair<int,int> > vect;
    for(i=1;i<=k;i++){
        cin>>t>>x;
        vect.push_back(make_pair(t,x));
    }
    sort(vect.begin(),vect.end());
    for(i=0;i<k;i++){
        if(vect[i].first<s){
            s=s+vect[i].second;
        }
        else{
            flg=0;
            break;
        }
    }
    if(flg==0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}
