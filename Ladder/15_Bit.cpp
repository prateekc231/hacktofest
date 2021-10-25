#include<bits//stdc++.h>
using namespace std;
int main(){
    int n,x=0,k;
    string s;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        k=s.length();
        while(k--){
            if(s[k]=='+'){
                x++;
                break;
            }
            if(s[k]=='-'){
                x--;
                break;
            }
        }
    }
    cout<<x;
}
