#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b,c,d,e;
    cin>>t;
    while(t--){
        vector<int> v;
        for(int i=0;i<4;i++){
            cin>>e;
            v.push_back(e);
        }

        int min=*min_element(v.begin(),v.end());
        
        a=v[0];
        b=v[1];
        c=v[2];
        d=v[3];

        if(min==b || min==d){
            cout<<"Gellyfish"<<endl;
        }else{
            cout<<"Flower"<<endl;
        }

    }
}