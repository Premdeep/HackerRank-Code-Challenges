#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int last(int& n, int& m, int& s){
   int result = (s+m-1);
    if(result%n == 0)
        return n;
    return result%n;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int test;
    cin>>test;
    int n,m,s;
    while(test-- > 0){
        cin>>n>>m>>s;
        cout<<last(n,m,s)<<endl;
    }
    return 0;
}