#include <bits/stdc++.h>
using namespace std;
int palindrome(int n,int b){
    int s=0;
     do
     {
      int a=n%10;
      int s=s*10+a;
      n=n/10;
       if(s==b)
         {
           bool x=1;
          cout<<x;
            break;
         }
     }while(n!=0);
    if(s!=b){
        bool x=0;
        cout<<x;
    }
    return 0;
}
int main()
{   int n;
cin>>n;
int b=n;
  palindrome(n,b);
return 0;
}