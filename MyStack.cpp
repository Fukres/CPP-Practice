#include<iostream>

using namespace std;

template<typename stype>
class MyStack{
private:
   int s=0;
   stype* arr = new stype[s];
public:
    void push(stype e){
        s=s+1;
        stype* arr1 = new stype[s];
        for(int i=0;i<s-1;i++){
            arr1[i]=arr[i];
        }
        arr=arr1;
        arr[s-1]=e;
    }
     
    void pop(){
        if(s>0){
            s=s-1;
        }
        else{
            throw std::runtime_error("Unable to pop an empty stack");
        }
    }

    int size(){
        return s >= 0 ? s : 0;
    }

    bool empty(){
        return s == 0 ? true : false;
    }

    stype top(){
        if(s>0){
            return arr[s-1];
        }
        else{
            throw std::runtime_error("an empty stack");
        }
    }
};

int main(){
    MyStack<int> s;
    s.push(9);
    s.push(8);
    s.push(7);
    s.push(6);
    s.push(5);

    cout<<s.empty()<<endl;
    cout<<s.size()<<endl;
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.size()<<endl;
    cout<<s.top()<<endl;
     s.pop();
    cout<<s.size()<<endl;
    cout<<s.top()<<endl;
     s.pop();
    cout<<s.size()<<endl;
    cout<<s.top()<<endl;
    s.pop();
    s.pop();
    s.pop();
    cout<<s.top()<<endl;
}
