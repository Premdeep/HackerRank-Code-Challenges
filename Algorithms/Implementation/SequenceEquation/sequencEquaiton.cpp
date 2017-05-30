#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int getIndex(vector<int>& ivec, int& val){
    int size = ivec.size();
    int index = 0;
    for(int i=1; i < size; i++){
        if(ivec[i] == val){
             index = i;
             break;
        }           
    }
    return index;
    
}
//  BruteForce Solution. Not Elegant RunTime O(n^3);


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    vector<int> ivec(n+1);
    for(int i = 1; i<(n+1); i++){
        cin>>ivec[i]; 
    }
    for(int i = 1; i<(n+1); i++){
        int index = getIndex(ivec, i);
        cout<<getIndex(ivec,index)<<endl;
    }
    return 0;
}
