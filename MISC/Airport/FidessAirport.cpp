#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	int arr[20];
	int start = 900;
	for(int i = 0; i < 20; i++)
		arr[i] = start++;
	int dep[20];
	int end = 1000;
	for(int i = 0; i < 20; i++)
		dep[i] = end++;

	int flights = 20;
	

	sort(dep, dep+flights);

	int i = 0, j = 0;
	int st = 0;
	int min = 0;

	while(i < flights && j < flights){

		if(min < st)
			min = st;

		if(arr[i] < dep[j]){
			st++;
			i++;
		}
		else if(arr[i] == dep[j]){
			st++;
			if(min < st)
				min = st;
			st--;
			i++;
			j++;
		}
		else{
			st--;
			j++;
		}

		
	}

	if(min < st)
		min = st;

	cout<<"min : "<<min<<endl;

	return 0;
}