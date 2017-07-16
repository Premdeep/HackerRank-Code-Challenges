#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// O(n^2) solution

int main(){
    string s;
    cin >> s;
    double size = s.length();
  //  cout<<"length : "<<size<<endl;
    double scale = sqrt(size);
   // cout<<"scale : "<<scale<<endl;
    int row = round(scale);
    //cout<<"row : "<<row<<endl;
    int col = ceil(scale);
    //cout<<"col : "<<col<<endl;
    if(row*col < size){
        
    }
    char arr[row][col];
    for(int i = 0; i < row; ++i){
        for(int j = 0; j < col; ++j){
            if((i*col + j) < size)
                arr[i][j] = s[i*col + j];
            else
                arr[i][j] = '\0';
        }
    }
    
      for(int i = 0; i < col; ++i){
        for(int j = 0; j < row; ++j){
            if(arr[j][i] != '\0')
             cout<<arr[j][i];
        }
        cout<<" ";
    }
    
    
    return 0;
    
}
   
    
  
    
    

