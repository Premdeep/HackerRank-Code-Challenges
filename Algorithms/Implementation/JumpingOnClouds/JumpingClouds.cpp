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
    for(int i = 0; i < n; i++){
        cin>>ivec[i];
    }
    int start  = 0;
    int E = 100;
    start = (start+k)%n;
    if(ivec[start] == 0)
        E-=1;
    else
        E-=3;
    while(start != 0){
        start = (start+k)%n;
        if(ivec[start] == 0)
            E-=1;
        else
           E-=3;        
    }
    cout<<E<<endl;
    return 0;
}
