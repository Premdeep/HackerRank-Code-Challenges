#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
     
    // Got help from the editorial. Just saw how to implement. Didn't copy the code.
    string s,t;
    cin>>s>>t;
    int k;
    cin>>k;
    
    int ls = s.size();
    int lt = t.size();
    int common = 0;
    for(common; common<lt; common++){
        if(s[common] != t[common])
            break;
    }
    int d = (ls+lt-2*common);
    if(d <= k){
        if(d%2 == k%2)
            cout<<"Yes";
        else{
            int total = ls+lt;
            if(total <= k)
                cout<<"Yes";
            else
                cout<<"No";
        }
    }else
        cout<<"No";
    return 0;
}
