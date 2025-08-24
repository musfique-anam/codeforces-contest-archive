#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,r;
    
    cin>>t;
    while(t--){
        cin>>n;
        vector <int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        int z=1;
        for(int i=0;i<n;i++){
            int x=v[i];
            int y=v[i+1];

            int r=(x/y)*z;

            z=r;

            if(r==1){
                break;
            }
        }

        if(r==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

}