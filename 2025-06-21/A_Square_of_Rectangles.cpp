#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,l1,l2,l3,b1,b2,b3;
    cin>>t;
    while(t--){
        cin>>l1>>b1>>l2>>b2>>l3>>b3;
        int m=b2+b3;
        int n=b1+b3;
        int p=b1+b2;
        if(l1==l2 && l2==l3){
            int s=b1+b2+b3;
            if(s==l1){
                cout<<"YES"<<endl;
            }
        }else if(b1==m){
            cout<<"YES"<<endl;
        }else if(b2==n){
            cout<<"YES"<<endl;
        }else if(b3==p){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}