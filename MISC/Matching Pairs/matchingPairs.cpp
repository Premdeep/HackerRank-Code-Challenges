#include <iostream>
#include <stack>
using namespace std;

bool Ucase(char& c){
	if((int) c >64 && (int)c < 91)
		return true;
	return false;
}

bool isPair(char& a, char& b){
	char c = (a + 32);
	return b == c;
}

int mPair(string& s){
	int ssize = s.size();
	int index = 0;
	if(ssize == 0 || ssize == 1)
		return -1;
	if(!Ucase(s[0]))
		return -1;
	stack<char> mystack;
	mystack.push(s[0]);
	bool flag  = true;

	for(int i = 1; i < ssize && flag; i++){

		if(Ucase(s[i]))
			mystack.push(s[i]);
		else{

			if(!mystack.empty()){
				char Upper = mystack.top();
				if(isPair(Upper, s[i])){
					mystack.pop();
					index = i;
				}
				else
					flag = false;
			}
		}
	}

	if(index == 0)
		return -1;
	else
		return index;

}

int main(){

	cout<<"Enter String : ";
	string s;
	cin>>s;
	cout<<mPair(s)<<endl;
}