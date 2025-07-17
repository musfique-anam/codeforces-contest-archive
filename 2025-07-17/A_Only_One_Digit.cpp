#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        string s;
        cin>>n;
        s=to_string(n);
        cout<<*(min_element(s.begin(),s.end()))<<endl;
    }
}