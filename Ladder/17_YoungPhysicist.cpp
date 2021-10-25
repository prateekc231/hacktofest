#include<bits/stdc++.h>
using namespace std;
int main(){
        int n,i,j;
        cin>>n;
        int arr[n][3];
        for(i=0;i<n;i++){
            for(j=0;j<3;j++){
                cin>>arr[i][j];
            }
        }
        int ans[3]={0,0,0};
        for(j=0;j<3;j++)
        {
            for(i=0;i<n;i++){
                ans[j]=ans[j]+arr[i][j];
            }
        }
        if(!ans[0]&&!ans[1]&&!ans[2])
            cout<<"YES";
        else
            cout<<"NO";
}
