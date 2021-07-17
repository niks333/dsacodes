#include<bits/stdc++.h>
using namespace std;

#define MAX 100

class Stack{
    int top;

    public:

    int a[MAX]; //Stack

    Stack(){top=-1;}
    bool push(int value);
    int pop();
    int peek();
    bool isEmpty();
};

bool Stack::push(int value){
    if(top>=MAX-1){
        cout<<"overflow\n";
        return 0;
    }
    else{
        a[++top]=value;
        cout<<value<<" is inserted in stack\n";
        return 1;
    }
}

int Stack::pop(){
    if(top<0){
        cout<<"Stack is Empty\n";
        return 0;
    }
    else{
        return a[top--];
    }
}

int Stack::peek(){
    if(top<0){
        cout<<"Stack is empty\n";
        return 0;
    }
    else{
        return a[top];
    }
}

bool Stack::isEmpty(){
    return (top<0);
}

int main(){
    class Stack s;
    s.push(5);
    s.push(10);
    s.push(15);
    s.push(20);

    cout<<s.peek()<<"\n";
    
    cout<<s.pop()<<"\n";
    cout<<s.pop()<<"\n";

    cout<<s.isEmpty()<<"\n";

    return 0;
}
