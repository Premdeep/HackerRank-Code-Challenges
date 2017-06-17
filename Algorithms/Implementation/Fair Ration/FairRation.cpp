#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    // O(n) Solution. Simple but works.
    int n;
    cin>>n;
    vector<int> ivec(n);
    for(int i = 0; i < n; i++){
        cin>>ivec[i];
    }
    int count = 0;
    for( int i = 1; i < n-1; i++){
        if(ivec[i-1]%2 != 0){
            ivec[i-1]+=1;
            ivec[i]+=1;
            count+=2;
        }else if(ivec[i]%2 != 0){
            ivec[i]+=1;
            ivec[i+1]+=1;
            count+=2;
        }
        else;
            
    }
    bool flag = false;
    for(auto i : ivec){
        if(i % 2 != 0){
            flag = true;
            break;
        }          
    }
    
    if(flag)
        cout<<"NO"<<endl;
    else
        cout<<count<<endl;
    return 0;
}
