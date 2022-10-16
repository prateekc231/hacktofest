#include<bits/stdc++.h>
using namespace std;
int main(){
int n,i,k;
cin>>n;
map<int,int> mp;
int arr[n];
for(i=0;i<n;i++){
    cin>>arr[i];
}
for(i=0;i<n;i++){
    mp[arr[i]]++;
}
int five=mp[5];
int zero=mp[0];
//cout<<five<<"-"<<zero;
five=five/9;
if(zero>0 && five >= 0){
        for(i=0;i<five;i++)
            cout<<"555555555";
        if(five==0 && zero>0){
            cout<<"0";
        }
        else{
            while(zero>0){
                cout<<"0";
                zero--;
            }
        }
}
else{
    cout<<"-1";
}
cout<<endl;

}
