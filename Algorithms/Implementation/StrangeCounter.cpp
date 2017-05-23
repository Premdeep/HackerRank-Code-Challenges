// Hacker Rank ALgorithms - Implementation - StrangeCounter

#include <iostream>
using namespace std;

int main(){
    long long  time;
    cin >> time;
    
    long long  start = 1;
    long long diff = 1;
    long long prev =1;
    
    while(start <= time){
       
        prev = start;     
        start += (3*diff);
        diff*=2;
    } 
    
    
    cout<<(prev+2)-(time-prev);
   
   
    
    return 0;
}

	//BruteForce:
	 // unsigned long  t;
  //   cin >> t;
  //   unsigned long  start = 3;
  //   unsigned long  oldstart = start;
  //   for(unsigned  long i =1; i<=t; i++){
  //       if(start == 0){           
  //           start = 2*oldstart;
  //           oldstart = start;
  //       }
  //      // cout<<start;
  //       start--;
  //   }
  //   cout<<start+1<<endl;
  //  // unsigned long val = 649267443994;
  //   //unsigned long val2 = 999999997668;
  //  // cout<<val<<endl;
  //  // cout<<val2; 




	