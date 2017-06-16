#include <cmath>
#include <cstdio>
#include <vector>
#include <climits>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    // O(n^2) Solution not much efficient. But still works.
    int n,m;
    cin>>n>>m;
    vector<int> im(m);
    for(int i = 0; i < m; i++)
        cin>>im[i];
    vector<int> ivec(n);
    for(int i = 0; i < n; i++){
        int min = INT_MAX;
        for(int j = 0; j < m; j++){
            int temp = abs(im[j] - i);
            if(temp < min)
                min = temp;
        }
        ivec[i] = min; 
    }
    
    int res = 0;
    for(auto i:ivec){
        if(i > res)
            res = i;
    }
    
    cout<<res<<endl;
    
    return 0;
}