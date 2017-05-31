#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
     
    // Made use of the fact that ai <= 100 so made a vector of lenght 101
    // similar to a hashMap O(n);
    int n;
    cin>>n;    
    vector<int> ivec(101,0);
    int max = 0;
    int sum = 0;
    int temp;
    for(int i = 0; i < n; i++){
        cin>>temp;
        ivec[temp]++;
       if(max < ivec[temp])
           max = ivec[temp];      
    }
    
    cout<<n-max<<endl;
    
 
    return 0;
}
