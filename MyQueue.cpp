#include<iostream>
using namespace std;

template<typename qtype>
class Myqueue{
private:
    int s=0;
    qtype* arr = new qtype[s];
public:
    void push(qtype e){
        s=s+1;
        qtype* arr1 = new qtype[s];
        for(int i=0;i<s-1;i++){
            arr1[i]=arr[i];
        }
        arr=arr1;
        arr[s-1]=e;
     }
     
    void pop(){
        if(s>0){
        s=s-1;
        qtype* arr1 = new qtype[s];
        for(int i=0;i<s;i++){
            arr1[i]=arr[i+1];
        }
        arr=arr1;
        }
         else{
            throw std::runtime_error("Popping an empty queue");
        }

    }
    int size(){
        return s;
    }
    bool empty(){
        if(s=0){
            return true;
        }
        else{
            return false;
        }
    }
    qtype back(){
        if(s>0)
        return arr[s-1];
        else{
            throw std::runtime_error("an empty queue");
        }
        
    }
    qtype front(){
        if(s>0){
        return arr[0];
        }
        else{
            throw std::runtime_error("an empty queue");
        }
    }
};
int main(){
    Myqueue<int> q;
    q.push(7);
    q.push(5);
    q.push(3);
    q.push(1);
    q.push(9);

    cout<<q.size()<<endl;
    cout<<q.front()<<" "<<q.back()<<endl;
    q.pop();
    cout<<q.front()<<" "<<q.back();
}
