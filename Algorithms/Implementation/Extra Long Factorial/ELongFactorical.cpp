#include <iostream>
using namespace std;

int product(int a[], int asize, int num1, int num2){
		int product = 0;
		int carry = 0;
		int res = num1;
		int index = 0;

		while(res > 0){
			a[index] = res%10;
			res = res/10;
			index++;
		}

		for(int i = 0; i < index; i++){
			int res = a[i]*num2 + carry;
			a[i] = res%10;
			carry = res/10;
		}

		while(carry > 0){
			a[index] = carry%10;
			carry = carry/10;
			index++;
		}


		// for(int i = index-1; i >= 0; i--)
		// 	cout<<a[i]<<"";
		// cout<<endl;

		return index;
}

int recurrence(int a[], int index, int k){

	int carry = 0;
	int product = 0;

	for(int i = 0; i < index; i++){
			product = a[i]*k + carry;
			a[i] = product%10;
			carry = product/10;
	}

	while(carry > 0){
		a[index] = carry%10;
		carry/=10;
		index++;
	}

	return index;
}

int main(){

int n;
bool flag = false;
cin >> n;

    if( n == 0 || n == 1)
        cout<<1<<endl;           
    else if( n == 2)
         cout<<2<<endl;
    else
        flag = true;
    
    if(!flag)
        return 0;


int arr[200];


int index = product(arr, 200, n, n-1);
int k = n-2;
 

while(k > 0){
	index = recurrence(arr, index, k );
	k--;
}

for(int i = index-1; i >= 0; i--)
		cout<<arr[i]<<"";
	cout<<endl;




return 0;

}