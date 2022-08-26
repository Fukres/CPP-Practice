#include<iostream>
using namespace std;

class Complex{
    public:
    double real;
    double complex;

    Complex(){
        real = 0;
        complex = 0;
    }

    Complex(double a, double b){
        real = a;
        complex = b;
    }
};


int main(){
    Complex a(4,5);
    
}