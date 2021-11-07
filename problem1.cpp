/* input an integer n and n digit number then find the key such as key= maximun digit in the number - second maximum digit in the number*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,t,r,r1=0,r2,key;
  
  cin>>n;
  cin>>m;
  
      while(m!=0){
     r=m%10;
    if(r>r1){
        r2=r1;
    r1=r;
   
    }
   else if(r>r2){
        r2=r;
    }

     m=m/10;
    
      }
    
      
  key=r1-r2;
  cout<<key;
  return 0;
} 