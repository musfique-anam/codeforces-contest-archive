#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str,num;
        cin>>str;
        int s=stoi(str);
        float root=sqrt(s);

        int a=floor(root);
        if(a == root){
            float div=root/2;

            int b=floor(div);
            if(a == div){
                cout<<div<<" "<<div<<endl;
            }else{
                int fl=floor(div);
                int cl=ceil(div);
                cout<<fl<<" "<<cl<<endl;
            }
        }else{
            cout<<"-1"<<endl;
        }
    }
}