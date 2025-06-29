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
        int max=*max_element(v.begin(), v.end());
        int min=*min_element(v.begin(), v.end());

        if(max-min > k){
            cout<<"Jerry"<<endl;
        }else{
            cout<<"Tom"<<endl;
        }
    }
}