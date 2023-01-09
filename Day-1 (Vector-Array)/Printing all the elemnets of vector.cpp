#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	// demo vector;
	vector<int> arr = {1,2,3,4,5,6};
	
	//pop_back
	arr.pop_back();
	
	//Push_Back
	arr.push_back(16);
	
	//Printing all the elemnets of vector
	for(int i=0; i<arr.size(); i++){
		cout<<arr[i]<<endl;
	}
	
	//Taking output now 
	cout<<arr.size()<<endl;
	
	// capacity of vector
	cout<<arr.capacity() <<endl;

	return 0;
}