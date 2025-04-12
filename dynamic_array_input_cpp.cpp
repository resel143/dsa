#include<iostream>
#include<vector>

using namespace std;

int main(){
	
	vector<int> arr;
	cout<<"enter array input"<<endl;
	int x;
	while(cin>>x){
		arr.push_back(x);
		if(cin.peek()=='\n') break;
	}
	
	cout<< "Array you entered"<<endl;
	for(int num: arr) cout<<num<<" ";
	
	return 0;
	
}