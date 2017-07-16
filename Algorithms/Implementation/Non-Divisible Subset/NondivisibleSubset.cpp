#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

inline int max(int& a, int& b){
    if(a > b)
        return a;
    return b;
}

inline int min(int& a, int& b){
    if(a < b)
        return a;
    return b;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, k;
    cin>>n>>k;
    vector<int> ivec(k,0);
    for(int i = 0; i < n; i++){
        int temp;
        cin>>temp;
        ivec[temp%k]++;
    }
    int count = 0;
    
    if(k%2 == 0){ // is Even then go < k/2; and add 1 if a[k/2] > 0;
        for(int i = 1; i<k/2; i++)
            count+=max(ivec[i], ivec[k-i]);  
        count+=min(1,ivec[k/2]);
    }else{
        for(int i = 1; i <= k/2; i++)
            count+=max(ivec[i], ivec[k-i]);
    }
    count+=min(1,ivec[0]);
    cout<<count<<endl;
        
    return 0;
}
