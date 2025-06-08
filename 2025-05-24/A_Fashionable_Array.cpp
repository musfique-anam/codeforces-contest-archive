#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,E,n,a,b,c,d,count=0,count2=0;
    cin>>t;
    while(t--){
        cin>>n;
        vector <int> v;
        for(int i=0;i<n;i++){
            cin>>E;
            v.push_back(E);
        }
        //Algorithm
        stable_sort(v.begin(),v.end());
        a=v.front();
        b=v.back();
        c=a+b;
        d=c%2;
        if(d==0){
            cout<<count<<endl;
        }else{
            while(d==0){
                count=0;
                v.erase(v.begin());
                count++;
                a=v.front();
                b=v.back();
                c=a+b;
                d=c%2; 
            }
            while(d==0){
                count2=0;
                v.pop_back();
                count2++;
                a=v.front();
                b=v.back();
                c=a+b;
                d=c%2; 
            }
            if(count<count2){
                cout<<count<<endl;
            }else{
                cout<<count2<<endl;
            }
        }
    }
}