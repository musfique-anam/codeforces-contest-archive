#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int lenA, lenB;
        string A,B,C;
        cin>>lenA>>A>>lenB>>B>>C;

        for(int i=0;i<lenB;i++){
            char ch=C[i];
            char ch2=B[i];
            
            if(ch == 'V'){
                A.insert(A.begin(),ch2);
            }else{
                A.push_back(ch2);
            }
        }

        cout<<A<<endl;
    }
}