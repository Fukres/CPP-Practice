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


template<typename qtype>
class MyQueue{
private:
    ListNode* head=NULL;
    ListNode* trav=NULL;
    ListNode* tail = NULL;
    int queueSize=0;

public:
    void push(qtype e){
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
        queueSize++;
    }
     
    void pop(){
        int s=size();
        if(s>0){
            ListNode* nodeafterhead = head->next;
            if(nodeafterhead==NULL){
                head=NULL;
                tail=NULL;
            }
            else{
                nodeafterhead ->prev = NULL;
                head=nodeafterhead;
            }
            queueSize--;
        }
        else{
            throw std::runtime_error("Popping an empty queue");
        }
    }

    int size(){ 
         return queueSize;
    }

    bool empty(){ 
        return size() == 0 ? true : false;
    }

    qtype back(){
        int s=size();
        if(s>0){
            return tail->value;
        }
        else{
            throw std::runtime_error("queue is empty");
        }
    }

    qtype front(){
        int s=size();
        if(s>0){
            return head->value;
        }
        else{
            throw std::runtime_error("queue is empty");
        }
    }
};

int main(){
    MyQueue<int> q;
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.pop();
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.pop();
    q.pop();
    q.pop();
    
    q.pop();
    cout<<"here "<<q.size()<<endl;
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
}
