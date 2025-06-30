#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,a;
    cin>>t;
    while(t--){
        int count=0,zero=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a;
            if(a==1){
                count++;
            }else{
                zero++;
            }
        }

        if(count > n-1 || zero > n-1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}