#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,l,r,step;
    int arr[6][6];
    for(i=1;i<6;i++){
        for(j=1;j<6;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
               l=i;
               r=j;
            }
        }
    }
    step=abs(l-3)+abs(r-3);
    cout<<step;
}
