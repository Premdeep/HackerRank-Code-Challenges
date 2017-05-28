#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    if(n == 1)
        return 2;
    int walk = 2;
    int sum = 2;
    for(int i = 2; i <= n; i++){
        walk = (walk*3)/2;
        sum+=walk;
    }
    cout<<sum<<endl;
    return 0;
}
