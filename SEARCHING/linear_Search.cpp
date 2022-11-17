#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++>){
        int target;
        cin>>target;

        int flag = 0; // Taking flagging variable
        for(int i= 0; i<n; i++){
            if(a[]==target){
                flag = 1;
                break;
            }
        }
        if(flag==1) cout<<"true";
        else cout<<"false";
    }
}

//Time Complexty = o(N)
//Time Complexty = o(1)