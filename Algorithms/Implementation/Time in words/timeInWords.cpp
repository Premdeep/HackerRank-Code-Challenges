#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int h;
    cin >> h;
    int m;
    cin >> m;    
    
    string past = " past ";
    string min = " minute";
    string mins = " minutes";
    string clk = " o' clock";
    
    string hours[60];    
    
    for(int i = 0; i < 60; i++)
        hours[i] = "";
    
    hours[0] = "zero";
    hours[1] = "one";
    hours[2] = "two";
    hours[3] = "three";
    hours[4] = "four";
    hours[5] = "five";
    hours[6] = "six";
    hours[7] = "seven";
    hours[8] = "eight";
    hours[9] = "nine";
    hours[10] = "ten";
    hours[11] = "eleven";
    hours[12] = "twelve";
    hours[13] = "thirteen";
    hours[14] = "fourteen";
    hours[15] = "quarter";
    hours[16] = "sixteen";
    hours[17] = "seventeen";
    hours[18] = "eighteen";
    hours[19] = "nineteen";
    hours[20] = "twenty";
    hours[21] = "twenty one";
    hours[22] = "twenty two";
    hours[23] = "twenty three";
    hours[24] = "twenty four";
    hours[25] = "twenty five";
    hours[26] = "twenty six";
    hours[27] = "twenty seven";   
    hours[28] = "twenty eight";
    hours[29] = "twenty nine";
    hours[30] = "half";  
    
    
    
    if(m == 0)
        cout<<hours[h]+clk;
    else if(m == 1)
        cout<<hours[m]+min+past+hours[h];
    else if( m < 15)
        cout<<hours[m]+mins+past+hours[h];
    else if(m == 15)
        cout<<hours[15]+past+hours[h];
    else if (m < 30)
        cout<<hours[m]+mins+past+hours[h];
    else if (m == 30)
        cout<<hours[m]+past+hours[h];
    else if( m < 45)
        cout<<hours[60-m]+mins+" to "+hours[(h+1)%12];  
    else if (m == 45)
        cout<<hours[60-m]+" to "+hours[(h+1)%12];
    else if (m < 60)
        cout<<hours[60-m]+mins+" to "+hours[(h+1)%12];
    else
        cout<<"done";   
  
    
    return 0;
}
