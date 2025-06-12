#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i=0;i<k;i++){
            cout<<1;
        }
        int a=n-k;
        for(int i=0;i<a;i++){
            cout<<0;
        }
        cout<<endl;
    }
}