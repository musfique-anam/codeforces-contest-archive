#include <bits/stdc++.h>
using namespace std;

int main (){
    int t,n,k,count=0,track=0;
    while(t--){
        cin>>n>>k;
        int arr[n];
        count=arr[0];   
        for(int i;i<n;i++){
            if(count>0){
                count--;
                track++;
            }else{
                count=arr[0];
            }
            arr[0]=count;
        }
    }
}