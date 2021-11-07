#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int fac(int a){
    if(a==0){
        return 1;
    }
    else{
        return a*fac(a-1);
    }
}
int main(){
    int n,t,r,y=0,s1=0,s2=0,x,z;

    cin>>n;
    t=n;
    x=t;
    z=x;
    while(n!=0){
        r=n%10;
        y++;
        n=n/10;
    }
    while(z!=0){
        r=z%10;
        s1=s1+pow(r,y);
        z=z/10;
    }
    while(t!=0){
        r=t%10;
        s2=s2+fac(r);
        t=t/10;

    }
if(x==s1){
    cout<<"it is a armstrong number";
}
else if(x==s2){
    cout<<"it is a strong number ";
}
else{
    cout<<"neither armstrong nor strong";
}
return 0;
}