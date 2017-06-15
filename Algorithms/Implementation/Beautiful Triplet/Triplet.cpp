#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    // O(n^2) solution. But could do better by using HashMap 
   
    int n,d;
    cin>>n>>d;
    int a[n];
    for(int i = 0; i < n; i++)
        cin>>a[i];
    int temp = 0;
    int count = 0;
    
    for(int i = 0; i < n-2; i++){
        int flag = true;
        for(int j = i+1; j<n; j++){
            if(a[j] == (a[i]+d)){
                temp = a[j];
                flag = false;
            }
            if(!flag){
                if(a[j] == (temp+d))
                    count++;
            }
        }
    }
    
    cout<<count<<endl;
    
    
    
    return 0;
}
