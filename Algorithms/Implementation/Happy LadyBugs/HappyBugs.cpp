#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    // O(n) Solution. 
    int T;
    cin>>T;
    while(T-- > 0){
        int l;
        string s;
        
        cin>>l>>s;
       
     
        int arr[96];
        for(int i = 0; i < 96; i++)
            arr[i] = 0;
        for(auto i : s){
            int index = (int)i;
            arr[index]+=1;
        }
        
        if(arr[95] == 0){
            int siz = s.size();
            bool notHappy = false;
            for(int i = 1; i < siz-1; i++ ){
                if(s[i] == s[i-1] || s[i] == s[i+1])
                    continue;
                else{
                    notHappy = true;
                    break;
                }                   
            }
            if(notHappy || (s[siz-1] != s[siz-2]))
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
        else{
            bool happy = true;
            for(int i = 0; i < 96; i++){
                if(arr[i] == 1 && i != 95){
                 
                    happy = false;
                    break;
                }                    
            }
            if(happy)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        
        
            
       
        
    }
    return 0;
}
