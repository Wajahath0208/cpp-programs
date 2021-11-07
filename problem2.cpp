/*bablu and irfan are travelling in a train for the first time they want to know their neighbours berth help them (one block consists of 8 berths)*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,c;
    cin>>n;
    i=n%8;
    if(i==0){
        c=n-1;
        cout<<c;
    }
    else if(i>=1 && i<4){
        c=n+3;
        cout<<c;
    }
    else if(i>=4 && i<=6){
        c=n-3;
        cout<<c;
    }
    else if(i==7){
        c=n+1;
        cout<<c;

    }
    
    switch(i){
        
        
        case 1:
        cout<<"LB";
        break;
        case 2:
        cout<<"MB";
        break;
        case 3:
        cout<<"UB";
        break;
        case 4:
        cout<<"LB";
        break;
        case 5:
        cout<<"MB";
        break;
        case 6:
        cout<<"UB";
        break;
        case 7:
        cout<<"SL";
        break;
        default:
        cout<<"SU";
        break;
    }
    return 0;
}