#include <cmath>
#include <cstdio>
#include <vector>
#include <climits>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* O(n^2) solution*/ 
    int n;
    cin>>n;
    vector<int> a(n);    
    for(int i = 0; i < n; i++)
        cin>>a[i];
    
    int min = INT_MAX;
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(a[i] == a[j]){
                int diff = abs(i-j);
               // cout<<"diff"<<diff<<endl;
                if(diff < min)
                    min = diff;
               // cout<<"min"<<min<<endl;
                break;
            }
        }
    }
        if(min == INT_MAX)
            cout<<-1;
        else
            cout<<min;
    return 0;
}
