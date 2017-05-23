#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int money, keyb, usb;
    cin>>money>>keyb>>usb;
    
    vector<int> kvec(keyb);
    vector<int> uvec(usb);
    
    for(int i = 0; i < keyb; i++)
        cin>>kvec[i];
    for(int j = 0; j < usb; j++)
        cin>>uvec[j];
    
    int min = INT_MAX;
    int result = -1;

    // More of like a selection sort algorithm O(n*m) complexity
    
    for(int i = 0; i < keyb; i++){
        for(int j = 0; j < usb; j++){
            int diff = money - (kvec[i]+uvec[j]);
            if(diff >= 0 && diff < min){
                min = diff;
                result = kvec[i]+uvec[j];
            }
                
        }
    }
    
    cout<<result;
    
    
   
    return 0;
}
