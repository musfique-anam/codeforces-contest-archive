#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,s,a=0,b,c;
    cin>>t;
    while(t--){
        cin>>n>>s;
        vector<int> A;
        for(int i=0;i<n;i++){
            cin>>c;
            A.push_back(c);
        }
        a=A.back();
        vector<int> v;
        if(s>a){
            for(int i=1;i<=s;i++){
                b=i;
                v.push_back(i);
            }
            int m=s-1;
            cout<<m<<endl;
        }else{

            for(int i=1;i<=a;i++){
                b=i;
                v.push_back(i);
            }

            int d=a-s;
            int e=s-1;

            if(d>e){
                if(s != 1){
                    int z=s-1;
                    int e=(2*z);
                    int x=a-s;
                    int sum=e+x;
                    cout<<sum<<endl;
                }else if(s==1){
                    int x=a-s;
                    cout<<x<<endl;
                }
            }else{
                if(s != a){
                    int z=a-s;
                    int e=(2*z);
                    int x=s-1;
                    int sum=e+x;
                    cout<<sum<<endl;
                }else if(s==a){
                    int x=a-1;
                    cout<<x<<endl;
                }
            }
        }
    }
}