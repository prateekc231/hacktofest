#include<bits/stdc++.h>
using namespace std;
int main(){
        int n,i,j,temp;
        cin>>n;
        int arr[n][n];
        temp=1;
        for(i=0;i<n;i++){
            if(i%2==0){
                    for( j=0;j<n;j++){
                            arr[j][i]=temp;
                            temp++;
                    }
                }
            else{
                for(j=n-1;j>=0;j--){
                            arr[j][i]=temp;
                            temp++;
                        }
                }
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
}
