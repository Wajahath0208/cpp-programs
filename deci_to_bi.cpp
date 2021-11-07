#include<bits/stdc++.h>
using namespace std;
int dec_to_binary(int a){
    int r,sum=0,b=1;
    while(a!=0){
        r=a%2;
        sum=sum+r*b;
        b=b*10;
        a=a/2;
    }
    return sum;
}

int main(){
    int x,y;
    cin>>x;
    y=dec_to_binary(x);
    cout<<y;
    return 0;

}