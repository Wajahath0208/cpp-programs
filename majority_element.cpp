#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n],i,j,m=0,count=0;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>(n/2)){
            m=arr[i];
        }
        count =0;
    }
    if(m==0){
        cout<< "no element"<<endl;
    }
    else{
        cout<<m<<endl;
    }
    return 0;
}