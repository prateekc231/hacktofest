#include<bits/stdc++.h>
using namespace std;
int main(){
        int x,y,x1,y1=0,x2=0,y2;
        cin>>x>>y;
        y2=abs(x)+abs(y);
        x1=abs(x)+abs(y);
        if(x<0){
            x1=-x1;
        }
        if(y<0){
            y2=-y2;
        }
        if(x1<x2){
            cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2;
        }
        else
        {
            cout<<x2<<" "<<y2<<" "<<x1<<" "<<y1;
        }
}
