#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,k;
    cin>>n>>k;
    vector<int> ivec(n);
    int max = 0;
    for(int i = 0; i < n; i++){
        cin>>ivec[i];
        if(max < ivec[i])
            max = ivec[i];      // Finding the max height O(n)
    }
    
    cout<<(max-k > 0?max-k:0);  // printing the max beverages.
        
  
   
    return 0;
}
