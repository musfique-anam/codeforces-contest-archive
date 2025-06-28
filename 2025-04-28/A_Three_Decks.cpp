#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b,c,sum,div,rem;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        sum=a+b+c;
        div=sum/3;
        rem=sum%3;
        if(rem == 0 && div >=a && div >=b && div <= c){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}