#include<iostream>
using namespace std;
bool prime(int n){
    if(n==1){
        return false;
    }
    if(n==2){
        return true;
    }
    int temp=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            temp=1;
        }
    }
    if(temp==0)
    return true;
    if(temp==1){
     return false;
    }
}
int main(){
    int n;
    cin>>n;
    cout<<prime(n);
}