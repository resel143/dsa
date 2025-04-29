#include<iostream>
#include<vector>

using namespace std;

int countNumberofSubArrayWithSum0(vector<int> arr){
	cout<< "Array you entered"<<endl;
	for(int num: arr) cout<<num<<" ";
}


int main(){
	
	vector<int> arr;
	cout<<"enter array input"<<endl;
	int x;
	while(cin>>x){
		arr.push_back(x);
		if(cin.peek()=='\n') break;
	}
	
	
	
	countNumberofSubArrayWithSum0(arr);
	
	return 0;
	
}