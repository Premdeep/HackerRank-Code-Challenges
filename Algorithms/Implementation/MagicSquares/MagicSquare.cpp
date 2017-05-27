#include <iostream>
#include <vector>
using namespace std;

vector< vector<int> > ivec(3, vector<int>(3,0));

int crossX(int x, int n){
	if(x > 0)
		x--;
	else
		x = n-1;
	return x;
}

int crossY(int y, int n){
	y = (y+1)%(n);
	return y;
}

int downX(int x, int n){
	x = (x+1)%n;
	return x;
}

int downY(int y, int n){
	if(y > 0)
		y--;
	else
		y = n-1;
	return y;
}



void printVector(vector<vector<int>>& ivec){
	for(auto i:ivec){
		for(auto j:i)
			cout<<j<<" ";
		cout<<endl;
	}
	cout<<endl;
}

int main(){

	printVector(ivec);

	int x = 0;
	int y = 1;

	int value  =1;
	ivec[x][y] = value;
		

	while(++value < 10){
		int oldx = x;
		x = crossX(x,3);
		y = crossY(y,3);
		if(ivec[x][y] == 0)
			ivec[x][y] = value;
		else{
			x = oldx;
			x = downX(x,3);
			y = downY(y,3);
			ivec[x][y] = value;
		}			
		
	}

	printVector(ivec);



	return 0;
}

