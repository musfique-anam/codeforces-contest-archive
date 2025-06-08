#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t,a,b,c,sum,com,out;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        sum=(a+b+c);
        if(sum%3==0){
            com=sum/3;
            out=c-com;
            c=c-out;
            
            while(a<c || b<c){
                if(out>=0){
                    if(a<c){
                        out=out-1;
                        a=a+1;
                    }
                    if(b<c){
                        out=out-1;
                        b=b+1;
                    }
                }
            }
            
            if(c==a && c==b){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            cout<<"NO"<<endl;
        }
    }
}