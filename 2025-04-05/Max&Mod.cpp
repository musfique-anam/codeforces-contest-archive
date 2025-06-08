#include <iostream>
using namespace std;
int main()
{
    int t,a=-1,b,count;
    cin >>t;
    while(t--){
        cin >>b;
        if(b%t==0){
            count++;
            cout<<count;
        }else{
            cout<<a;
        }
    }
}