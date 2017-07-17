#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


// i/p: gkbekyrhcwc
// o/p: gkbekyrhwcc

int main() {
    // Reference: https://www.nayuki.io/page/next-lexicographical-permutation-algorithm
    int n;
    cin>>n;
    while(n-- > 0){
        
        string s;
        cin>>s;
        int size = s.length();
        vector<char> cvec(size);
        for(int i = 0; i<size; ++i)
            cvec[i] = s[i];
        int suffix = 0;
        for(int i = 1; i < size; ++i){
            if(cvec[i-1] >= cvec[i]);
            else
                suffix = i;
        }
        
        if(suffix == 0)
            cout<<"no answer"<<endl;
        else{
          //  cout<<"suffix : "<<suffix<<endl;
            int pivot = suffix-1;
            for(int i = size-1; i >= suffix; i--){
                if(cvec[i] > cvec[pivot]){ // very important step;
                  //  swap(cvec,i,pivot);
                     int temp = cvec[i];
                        cvec[i] = cvec[pivot];
                        cvec[pivot] = temp;
                    break;
                }
            }
            sort(cvec.begin()+suffix, cvec.end());
            for(auto i:cvec)
                cout<<i;
            cout<<endl;
        }

    }
    
    return 0;
}

