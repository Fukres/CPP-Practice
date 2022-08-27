#include<iostream>
using namespace std;
int rev(int n){
  int ans=0;
  while(n>0){
    ans=ans*10+n%10;
    n=n/10;
  }
  return ans;
}
int main(){
  int n;
  cin>>n;
  cout<<rev(n)<<endl;
}
