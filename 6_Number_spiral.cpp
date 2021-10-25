#include<bits/stdc++.h>
using namespace std;
int main(){
    long t;
    cin>>t;
    while(t--){
        long x,y;
        cin>>x>>y;
        if(x==1&&y==1){
                cout<<"1"<<endl;
                continue;
        }
        else if(x==1&&y==2){
                cout<<"2"<<endl;
                continue;;
        }
        else if(x==2&&y==1){
                cout<<"4"<<endl;
                continue;;
        }
        else if(x==2&&y==2){
                cout<<"3"<<endl;
                continue;
        }
        else{
            long temp=max(x,y);
            if(temp%2==0){
                long a=1,b=temp-1;
                long ans=b*b;
                if(y>b){
                    ans+=abs(x-a)+abs(y-b);
                }
                else{
                    ans+=abs(x-a)+abs(y-b)+2;
                }
                cout<<ans<<endl;
                continue;
            }
            else{
                long a=temp-1,b=1;
                long ans=a*a;
                if(x>a){
                    ans+=abs(x-a)+abs(y-b);
                }
                else{
                    ans+=abs(x-a)+abs(y-b)+2;
                }
                cout<<ans<<endl;
                continue;
            }
        }
}
}
