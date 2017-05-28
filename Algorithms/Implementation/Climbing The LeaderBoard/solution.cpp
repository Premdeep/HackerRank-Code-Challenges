#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long n,m;
    cin>>n;
    vector<long> scores(n); 

    for(int i = 0; i < n; i++)
        cin>>scores[i];

    cin>>m;
    vector< long> alison(m);
    for(long i = 0; i<m; i++)
        cin>>alison[i];
    vector<long> rank(n);

    long count = 1;
    rank[0] = 1;
    long max = scores[0];
    for(long i = 1; i < n; i++){
        if(max == scores[i]);            
        else
            count++;
        rank[i] = count;
        max = scores[i];
    }
    
    
    long j = n-1;
  
    for(long i = 0; i < m; i++){
        
      //  for(long j = n-1; j>=0; j--)  brute Force resulting in O(n^2).
        while(j>=0){   // Tiny improvement with windows.
            
            if(alison[i] < scores[j]){
                cout<<rank[j]+1<<endl;
                temp = j;
                break;
            }
            else if(alison[i] == scores[j]){
                cout<<rank[j]<<endl;
                temp = j;
                break;
            }
            else if(alison[i] >= scores[0]){
                cout<<rank[0]<<endl;
                temp = j;
                break;
            }
            j--;
        }        
       
    }   
    
    
    
    return 0;
}
