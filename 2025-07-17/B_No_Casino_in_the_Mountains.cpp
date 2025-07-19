#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        vector<int> v(n);
        
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        int count=0;
        int i=0;

        while(i<=n-k){
            bool x=true;

            for(int j=0;j<k;j++){
                if(v[i+j] != 0){
                    x=false;
                    break;
                }
            }

            if(x){
                count++;
                i += k+1;
            }else{
                i++;
            }
        }
        cout<<count<<endl;
    }
}