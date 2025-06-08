#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,length,ans,count=0;
    string str1,one="1",zero="0";
    cin>>t;
    while(t--){
        cin>>length;
        cin>>str1;
        count=0;
        for(int i=0;i<length;i++){
            if(str1[i]==one[0]){
                ans=(length*1)-1;
            }else{
                ans=(length*0)+1;
            }
            count=count+ans;
        }
        cout<<count<<endl;  
    }
}