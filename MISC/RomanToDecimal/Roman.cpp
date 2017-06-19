#include <iostream>
using namespace std;

int main() {
	//code
	int a[91];
	for(int i = 0; i<91; i++)
	    a[i] = 0;
	
	a[73] = 1;
	a[86] = 5;
	a[88] = 10;
	a[76] = 50;
	a[67] = 100;
	a[68] = 500;
	a[77] = 1000;
	
	cout<<"Enter ROMAN Number : ";
	string s;
	cin>>s;
	
	int len = s.size();
	int temp = 0;
	
	for(int i = 0; i < len-1; i++){
	    if(a[s[i]] >= a[s[i+1]])
	        temp+=a[s[i]];
	    else
	        temp-=a[s[i]];
	    //cout<<temp<<endl;
	}

	temp+=a[s[len-1]];
	
	cout<<s<<" : "<<temp<<endl;
	return 0;
}