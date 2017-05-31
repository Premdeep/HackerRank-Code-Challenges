#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    // O(n) complexity
    string s;
    unsigned long long n;
    cin>>s;
    cin>>n;
 
    int len = s.length();
    unsigned long long count = 0;
    for(long long i = 0; i < len; i++){
        if(s[i] == 'a')
            count++;
    }
    
    int temp  = 0;
    
    for(int i = 0; i < (n%len); i++){
        if(s[i] == 'a')
            temp++;
    }

    // OR

   //   for(long long i = 0; i < len; i++){
   //     if(s[i] == 'a')
   //         count++;
   //     if((i < n%len) && s[i] == 'a')
   //         temp++;
   // }

    
     cout<<count*(n/len) + temp<<endl;
    
    return 0;
}
