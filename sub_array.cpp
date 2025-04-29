#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int PrintArray(vector<int> inputArr){
	cout<<"Array length: "<<inputArr.size()<<endl;
	for(int i:inputArr){
		cout<<i<<" ";
	}
	return 0;
}


int FindMaxSuminSubArrayofLengthK(int K, vector<int> inputArr){
	int i=0, j=K-1, maxSum=0;
	while(j<inputArr.size()){
		int sum=0;
		for(int m=i;m<=j;m++){
			sum+=inputArr[m];
		}
		maxSum = max(maxSum, sum);
		i++;
		j++;
	}
	
	return maxSum;
}


int main(){
	vector<int> inputArr;
	int number;
	cout<<"Enter the input Array:"<<endl;
	while(cin>>number){
		inputArr.push_back(number);
		if(cin.peek() == '\n') break;
	}
	
	cout<<"Array you entered:"<<endl;
	PrintArray(inputArr);
	cout<<endl;
	cout<<FindMaxSuminSubArrayofLengthK(4, inputArr);
	return 0;
	
}