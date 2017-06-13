#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int Nsize(int& n){
    if(n < 10)
        return 1;
    if(n < 100)
        return 2;
    if(n < 1000)
        return 3;
    if(n < 10000)
        return 4;
    if(n < 100000)
        return 5;
    return 0;
}


int main() {
    // O(n*p solution not efficient but get's job done.)
   
    int p,q;
    cin>>p>>q;
    bool flag = true;
    for(int i = p; i <= q; i++){
        
        long long res = (long long)i * (long long) i;      
        long long temp = res;   
        int arr[15] = {0};
        int count = 0;
        while(temp > 0 ){
            arr[count] = temp%10;
            temp = temp/10;
            count++;            
        }
        int pSize = count;
        int rSize = Nsize(i);
        int lSize = pSize - rSize;          
        
        int rValue = 0;
        int lValue = 0;
        if(lSize > rSize)
            continue;
        else{
            for(int i = rSize-1; i >= 0; i--){
                rValue = rValue*10 + arr[i];
            }
            for(int j = pSize-1; j >=rSize; j--)
                lValue = lValue*10 + arr[j];
        }
        
        if((rValue + lValue) == i){
             cout<<i<<" ";
            flag = false;
        }      
        
    }
    
    if(flag)
        cout<<"INVALID RANGE";
    
    return 0;
}
