#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    // taking input from the user by the loop :-
    for (int i = 0; i<n; i++)
    {
        cin >> a[i];
    }
    int target = 0;
    cin>>target;
    for (int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(a[i] == a[j] == target){
                cout<<"target is true";
                fails = 1;
                break;
            }
        }
    }
    if(fails == 0){
        cout<<"false";
    }
    return 0;
}
    
