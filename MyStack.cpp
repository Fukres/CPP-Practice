#include<iostream>

using namespace std;

class ListNode{
public:
    int value;
    ListNode* next, *prev;

    ListNode(){
        next=NULL;
        prev=NULL;
    }

    ListNode(int val){
        value=val;
        next=NULL;
        prev=NULL;
    }
};


template<typename stype>
class MyStack{
private:
    ListNode* head=NULL;
    ListNode* trav=NULL;
    ListNode* tail = NULL;
    int stackSize=0;

public:
    void push(stype e){
        if(head==NULL){
            ListNode* newNode = new ListNode(e);
            head=newNode;
            tail=newNode;
        }
        else{
            ListNode* newNode = new ListNode(e);
            newNode->prev = tail;
            tail->next = newNode;
            tail=newNode;
        }
        stackSize++;
    }
     
    void pop(){
        int s=size();
        if(s>0){
            ListNode* nodeBeforeTail = tail -> prev;
            if(nodeBeforeTail==NULL){
                head=NULL;
                tail=NULL;
            }
            else{
                nodeBeforeTail ->next = NULL;
                tail=nodeBeforeTail;
            }
            stackSize--;
        }
        else{
            throw std::runtime_error("Popping an empty stack");
        }
    }

    int size(){ 
         return stackSize;
    }

    bool empty(){ 
        return size() == 0 ? true : false;
    }

    stype top(){
        int s=size();
        if(s>0){
            return tail->value;
        }
        else{
            throw std::runtime_error("Stack is empty");
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

   cout<<"top element= "<<s.top()<<endl;
   cout<<"size = "<<s.size()<<endl;
   cout<<"check empty "<<s.empty()<<endl;
   s.pop();
   cout<<"top element= "<<s.top()<<endl;
   cout<<"size = "<<s.size()<<endl;
   s.pop();
   cout<<"top element= "<<s.top()<<endl;
   cout<<"size = "<<s.size()<<endl;
   s.pop();
   cout<<"top element= "<<s.top()<<endl;
   cout<<"size = "<<s.size()<<endl;
   s.pop();
   cout<<"top element= "<<s.top()<<endl;
   cout<<"size = "<<s.size()<<endl;
   s.pop();
   cout<<"top element= "<<s.top()<<endl;
   cout<<"size = "<<s.size()<<endl;
   s.pop();
   cout<<"top element= "<<s.top()<<endl;
   cout<<"size = "<<s.size()<<endl;

}
