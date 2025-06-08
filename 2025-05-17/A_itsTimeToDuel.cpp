#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,duel,div,cel;
    cin>>t;

    while(t--){
        int count=0;
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            if(arr[i]==1){
                count++;
            }
        }

        duel=n-1;
        if(n%2==0){
        if(count==duel){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
        }else{
            int a=count*2;
            if(count==duel || a==duel){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
            }
        } 
    }
}