#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

void printArray(vector<int> inputArr){
	for(int i:inputArr){
		cout<<i<<" ";
	}
	cout<<endl;
}

int FindLengthMaxSubArraySumltK(int K, vector<int> inputArr){
	int i=0,j=0, sum=0, maxLen=0;
	
	for(i=0; i<inputArr.size(); i++){
		sum=0;
		for(j=i;j<inputArr.size();j++){
			sum += inputArr[j];
			if(sum <= K){
				maxLen = max(maxLen, j-i+1);
			}
		}
	}
	
	return maxLen;
}


int main(){
	vector<int> inputArr;
	
	cout<<"Enter Array:"<<endl;
	int x;
	
	while(cin>>x){
		inputArr.push_back(x);
		if(cin.peek()=='\n') break;
	}
	
	cout<<"Array is: "<<endl;
	printArray(inputArr);
	
	cout<<FindLengthMaxSubArraySumltK(14, inputArr);
	
}