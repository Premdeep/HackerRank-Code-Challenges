#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {            // O(n) complexity
    
    long long b,w;
    long long x,y,z;
    int t;
    cin>>t;
   
    while(t-- > 0){
        cin>>b>>w;
        cin>>x>>y>>z;
         long long bcost = b*x;
         long long wcost = w*y;
        if(x > (y+z))
            bcost = b*(y+z);
        if(y > (x+z))
            wcost = w*(x+z);
        
        cout<<bcost+wcost<<endl;
           
    }
   
    
    return 0;
}
