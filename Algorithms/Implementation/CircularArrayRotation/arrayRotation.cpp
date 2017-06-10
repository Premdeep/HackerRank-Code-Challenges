#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,k,q;
    cin>>n>>k>>q;
    vector<int> ivec(n);
    int result;
    for(int i = 0; i < n; i++)
        cin>>ivec[i];
    vector<int> qvec(q);
    for(int i = 0; i < q; i++){
        cin>>qvec[i];
        
        if(qvec[i] - k%n < 0)
            result = ivec[n+qvec[i]-(k%n)];  // if (index - k < 0 then (N+index - k))
        else
            result = ivec[qvec[i]-(k%n)];       // else it is just (index-k)
        
        cout<<result<<endl;
        
    }
        
    
    return 0;
}
