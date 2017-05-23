#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int secondLargest(vector<int>& ivec){
	int first = INT_MIN;
	int second = first;

	int size = ivec.size();

	if(size == 0 || size == 1)
		return -1;
	else{
		for(int i = 0; i < size; i++){
			if(ivec[i] > first){
				second = first;
				first = ivec[i];
			}
			else{
				if(ivec[i] > second)
					second = ivec[i];
			}
		}
	}

	return second;

}

int main(){

	vector<int> ivec = {1,7,2,5,8,2,3,9};

	cout<<"2nd largest number is : "<<secondLargest(ivec);

	return 0;
}