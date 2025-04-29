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

const OptimizedFindMaxSuminSubArrayofLengthK(int K, vector<int> inputArr){
	int i=0, j=K-1, maxSum=0, sum=0;
	for(int m=0;m<=j;m++){
		sum+=inputArr[m];
	}
	maxSum = sum;
	while(j<inputArr.size()){
		i++;
		j++;
		sum -= inputArr[i-1];
		sum+=inputArr[j];
		maxSum = max(maxSum, sum);
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
	cout<<OptimizedFindMaxSuminSubArrayofLengthK(4, inputArr);
	return 0;
	
}