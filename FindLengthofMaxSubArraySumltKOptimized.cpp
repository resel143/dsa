#include<iostream>
#include <algorithm>
#include<vector>

using namespace std;

void printInputArray(vector<int> inputArr){
	for(int i:inputArr){
		cout<<i<<" ";
	}
}

int FindLongestSubArraySumltK(vector<int> inputArr, int K){
	int l=0, r=0, sum=0, maxLen=0;
	while(r<inputArr.size()){
		sum += inputArr[r];
		if(sum>K){
			sum -= inputArr[l];
			l++;
		}
		
		if(sum <= K){
			maxLen = max(maxLen, r-l+1);
		}
		r++;
	}	
	return maxLen;
}

int main(){
	vector<int> inputArr;
	
	cout<<"Enter Array:"<<endl;
	int x;
	while(cin>>x){
		inputArr.push_back(x);
		if(cin.peek() == '\n') break;
	}
	
	printInputArray(inputArr);
	
	cout<<FindLongestSubArraySumltK(inputArr, 14);
}