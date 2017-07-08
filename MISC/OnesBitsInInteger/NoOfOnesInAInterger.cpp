#include <iostream>
#include <time.h>

using namespace std;

int transition(int x){
	int c = 0;
	bool change = x&1;
	while(x != 0){
		x>>=1;
		if((x&1) != change)
				c++;	
		change = (x&1);	
	}
	return c;

}

int ones(int x){
 	int c = 0;
	if(x < 0){
		++c;
		x = ~(~x|(1<<31)); // making -ve bit to zero
	}	
	while(x != 0){
		if(x&1)
			c++;
		x>>=1;
	}
	return c;
}

int efficientOne(int x){
	int count = 0;
	while(x != 0){
		x = x&(x-1);
		count++;
	}
	return count;
}

int main(){

int x = 1;
//cout<<"transitions : "<<transition(x)<<endl;
cout<<"ones : "<<ones(x)<<endl;
cout<<"efficientOne : "<<efficientOne(x)<<endl;

}