#include<iostream>
using namespace std;

class sum
{
    private:
    int a;
    int b;
    public:
    sum(int c, int d){
        a=c;
        b=d;
    }
   int add(){
      return (a+b);
    }
};


int main(){
    sum num(4,5);
    cout<<num.add();
}