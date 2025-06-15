#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,k,a,b,x,y,A,B,C,sum=0;
    cin>>t;
    while(t--){
        cin>>k>>a>>b>>x>>y;
        if(k>a || k>b){
            if(x<y){
                k=k-b;
                A=k/x;
                B=b/y;
                sum=A+B;
                if(a>b){
                    C=sum-x;
                }else{
                    C=sum+(a+x);
                }
                cout<<C<<endl;
            }else if(x>y){
                k=k-a;
                A=k/y;
                B=a/x;
                sum=A+B;
                cout<<sum<<endl;
            }
        }else{
            cout<<"0"<<endl;
        }
    }
}