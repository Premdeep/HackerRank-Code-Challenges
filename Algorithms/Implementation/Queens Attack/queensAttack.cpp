#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <iostream>
#include <algorithm>


using namespace std;

inline int up(int& x, int& y, int& n){
    return n-y;
}

inline int down(int& x, int& y, int& n){
    return y-1;
}

inline int right(int& x, int& y, int& n){
    return n-x;
    }

inline int left (int& x, int& y, int& n){
    return x-1;
}

inline int rU(int x, int y, int& n){
    int t = 0;
    while(++x <= n && ++y <= n)
        t++;
    return t;
}

inline int lU(int x, int y, int& n){
    int t = 0;
    while(--x >=1 && ++y <= n)
        t++;
    return t;
}

inline int rD(int x, int y, int& n){
    int t = 0;
    while(++x <=n && --y >= 1)
        ++t;
    return t;
}

inline int lD(int x, int y, int& n){
    int t = 0;
    while(--x >=1 && --y >= 1)
        t++;
    return t;
}

bool isvalid(int& x, int& y, int& x1, int& y1){
    if(x == x1 || y == y1)
        return true;
    return abs(x-x1) == abs(y-y1);
}

bool isH(int& x, int& y, int& x1, int& y1){
    return y == y1;
}

bool isV(int& x, int& y, int& x1, int& y1){
    return x == x1;
}

bool isD(int& x, int& y, int& x1, int& y1){
    return abs(x-x1) == abs(y-y1);
}

int min(int a, int b){
    if(a < b)
        return a;
    return b;
}

int main(){
    int n;
    int k;
    cin >> n >> k;
    int y;
    int x;
    cin >> y >> x;       
 
    int rDis = right(x,y,n);
    int lDis = left(x,y,n);
    int uDis = up(x,y,n);
    int dDis =  down(x,y,n);
    int rUDis = rU(x,y,n);
    int rDDis = rD(x,y,n);
    int lUDis = lU(x,y,n);
    int lDDis = lD(x,y,n);
   
    for(int a0 = 0; a0 < k; a0++){
        int y1;
        int x1;
        cin >> y1 >> x1;
       
        if(isvalid(x, y, x1, y1)){            
            if(isH(x,y,x1,y1)){          // Horizantal Plane             
                if(x1 > x){             // Right
                    int temp = x1-x-1;
                    rDis = min(temp,rDis);                   
                }else{                  // Left
                    int temp = x-x1-1;
                    lDis = min(temp,lDis);
                }
            }else if(isV(x,y,x1,y1)){   // Vertical Plane
                if(y1 > y){              // Up
                    int temp = y1-y-1;
                    uDis = min(temp,uDis);
                }else{                   // Down
                    int temp = y-y1-1;
                    dDis = min(temp,dDis);
                }
            }else{                      // Diagonal Plane
                
                if(x1 > x && y1 > y){       // RU
                    int temp = abs(x1-x-1);                  
                    rUDis = min(temp,rUDis);
                }else if(x1 > x && y1 < y){ // RD
                    int temp = abs(x1-x-1);
                    rDDis = min(temp,rDDis);
                }else if(x1 < x && y1 < y){ // LD
                    int temp = abs(x-x1-1);
                    lDDis = min(temp,lDDis);
                }else{                      // LU
                    int temp = abs(x-x1-1);
                    lUDis = min(temp,lUDis);
                }
                
            }
         
        }
    }   
    
    cout<<(rDis+lDis+uDis+dDis+rUDis+rDDis+lUDis+lDDis)<<endl;
    return 0;
}
