#include<iostream>
using namespace std;
int main(){
    //Dclaring of an array:-
    int arr[] = {6,3,9,10,1,2};
    //AS c++ DONT have the size function so we use this methid
    int l = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+l);
    for(int i = 0; i<l; i++){
        cout<<arr[i]<<endl;
    }
}