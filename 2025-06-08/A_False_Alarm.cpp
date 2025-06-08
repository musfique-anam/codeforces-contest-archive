#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,i,j,n,s,t,x,y;
    cin>>t;
    while(t--){
        cin>>n>>x;
        vector <int> v;
        for(int i=0;i<n;i++){
            cin>>a;
            v.push_back(a);
        }
        
        if(n>x){
            for(i=0;i<n;i++){
                if(v[i]==1)
                break;
            }

            x=x-1;
            j=i+x;
            j=j+1;
    
            v.erase(v.begin(),v.begin()+j);

            int one=1;
            int c=count(v.begin(), v.end(), one);
            if(c == 0){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            cout<<"YES"<<endl;
        }
    }
}