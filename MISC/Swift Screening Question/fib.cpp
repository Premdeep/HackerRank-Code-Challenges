/* 	*****************************************************************************************************************
	Name: Premdeep Amudala 	
	*****************************************************************************************************************
	Swift Navigation: Source Code O(n) Complexity
	Compiler Used: g++ -std=c++11
	To compile the code. Please use the below command in Terminal(shell)
	g++ fib.cpp -o fib -std=c++11
*/


#include <iostream>
using namespace std;

// Check for Prime
bool isprime(const int& n){

	if(n == 1 || n == 0)
		return false;

	for(int i = 2; i < n; i++){
		if(n%i == 0)
			return false;
	}
	return true;
}

// Check for mod(3) == 0
inline bool isdivby3(const int& n){
	return n%3 == 0;
}
// Check for mod(5) == 0
inline bool isdivby5(const int& n){
	return n%5 == 0;
}
// Check for mod(15) == 0
inline bool isdivby15(const int& n){
	return n%15 == 0;
}

void printSeq(int& res){

	if(isprime(res))
		cout<<"BuzzFizz"<<endl;
	else if(isdivby3(res))
		cout<<"Buzz"<<endl;
	else if(isdivby5(res))
		cout<<"Fizz"<<endl;
	else if(isdivby15(res))
		cout<<"FizzBuzz"<<endl;
	else
		cout<<res<<endl;
}

void fib(int& n){

	int first = 1;
	int second = 1;

	if(n == 0){
		printSeq(first);		
	}
	else if(n == 1){
		printSeq(first);
		printSeq(second);
	}
	else{
		int next;
		printSeq(first);
		printSeq(second);
		for(int i = 2; i <= n; i++ ){
			next = first+second;
			printSeq(next);
			first = second;
			second = next;
		}
	}

}

int main(){
	// n index Starts from (0 and goes till n)
	cout<<"enter n : ";
	int n;
	cin>>n;
	fib(n);
	return 0;
}