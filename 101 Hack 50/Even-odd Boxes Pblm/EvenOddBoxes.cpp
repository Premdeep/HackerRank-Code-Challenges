#include <bits/stdc++.h>

using namespace std;

int minimumChocolateMoves(int n, vector <int> a) {
    // Complete this function
    int unmatch = 0;
    int one = 0;
    int moreOne = 0;
    int moves = 0;
    long long rem = 0;
    
    for(int i = 0; i < n; i++){
        if(a[i]%2 != i%2){
            unmatch++;
            if(a[i] > 1)
                moreOne++;
            else
                one++;
        }
    }
    
    if(moreOne >= one){
        moves += (one);
        
        if((moreOne-one)%2 == 0)
            moves+=((moreOne-one)/2);
        else
            return -1;
    }else{
        moves+=(moreOne);
        long long remOne = (one-moreOne);
        if(remOne % 2 != 0)
            return -1;
        else
            rem = remOne;
            
    }
    
    for(int i = 0, j = 0; i < n && j < moreOne; i++ ){
        if(a[i] %2 != i%2 && a[i] > 1){
            a[i]--;
            j++;
        }
    }  
    
   long long res = 0;
   // int res = 0;
    
    for(int i = 0; i<n; i++){
       if(i%2 == 0 && a[i]-2 > 1)
           res+=(a[i]-2);
       else if(i%2 == 1 && a[i]-1 > 0)
           res+=(a[i]-1);
    }
    
    if(rem <= res)
        return moves+rem;
    return -1;  
   
    
   
        
}

int main() {
    //  Return the minimum number of chocolates that need to be moved, or -1 if it's impossible.
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int n;
        cin >> n;
        vector<int> X(n);
        for(int X_i = 0; X_i < n; X_i++){
           cin >> X[X_i];
        }
        int result = minimumChocolateMoves(n, X);
        cout << result << endl;
    }
    return 0;
}
