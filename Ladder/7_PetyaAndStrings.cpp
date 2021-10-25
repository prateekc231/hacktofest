#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    bool flag=true;
    int i,pos,pot;
    cin>>s;
    cin>>t;
    for(i=0;i<s.length();i++){
        if((char(s[i])==char(t[i])) || (char(s[i]+32)==char(t[i]))|| (char(t[i]+32)==char(s[i])))
        {
            continue;
        }
        else{
            flag=false;
            break;
        }
    }
    //cout<<s[i]<<"-"<<t[i]<<endl;
    if(flag==true){
        cout<<"0";
    }
    else{
            if(s[i]>=97){
                pos=s[i]-97;
            }
            else
                pos=s[i]-65;
            if(t[i]>=97){
                pot=t[i]-97;
            }
            else
                pot=t[i]-65;
            if(pos<pot){
                cout<<"-1";
            }
            else
                cout<<1;
    }
}
