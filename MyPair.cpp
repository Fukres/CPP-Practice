#include<iostream>

using namespace std;

template <typename pairT1 , typename pairT2>
class MyPair{
    public:
    pairT1 first;
    pairT2 second;

    MyPair(){
        first = 0;
        second = 0;
    }

    MyPair(pairT1 a, pairT2 b){
        first = a;
        second = b;
    }
};

template <typename pairT1 , typename pairT2>
MyPair<pairT1, pairT2> makePair(pairT1 a, pairT2 b){
    MyPair<pairT1, pairT2> p(a,b);
    return p;
}

int main(){
    MyPair <int ,int> p;
    p = makePair(10,4);
    cout<<p.first<<" "<<p.second<<endl;

    MyPair <int ,int> q(10,20);
    cout<<q.first<<" "<<q.second<<endl;
}