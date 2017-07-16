#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

// Here the key is finding the container that can fit in the balls.
// Index doesn't matter in this case. 
// That has given us the flexibility to use sort to perform linear search
// resulting in 2*n*logn + n operations

int main(){
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int n;
        cin >> n;
        vector<long long> containers(n,0);
        vector<long long> balls(n,0);
        vector< vector<int> > M(n,vector<int>(n));
               // your code goes here
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin>>M[i][j];
                containers[i]+=M[i][j];
                balls[j]+=M[i][j];
            }
        }
        sort(containers.begin(), containers.begin()+n);
        sort(balls.begin(),balls.begin()+n );
        bool flag = false;
        for(int i= 0; i < n; i++){
            if(containers[i] == balls[i])
                continue;
            else{
                flag = true;
                break;
            }
        }
        
        if(flag)
            cout<<"Impossible"<<endl;
        else
            cout<<"Possible"<<endl;
        
    }
    return 0;
}
