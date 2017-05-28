#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int getIndex(char c){
    return c%97;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
   
    vector<int> height(26);
    for(int i = 0; i < 26; i++)
        cin>>height[i];
    string s;
    cin>>s;
    int max = 0;
    
    for(auto i: s){
        int maxHeight = height[getIndex(i)];  // O(n) complexity
       if(max < maxHeight)
           max = maxHeight;
    }
    
    cout<<s.length()*max<<endl;
        
    
    return 0;
}
