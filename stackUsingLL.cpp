#include<bits/stdc++.h>
using namespace std;

class StackNode{
    public:
    int data;
    StackNode* next;
};

StackNode* newNode(int value){
    StackNode* stackNode = new StackNode();
    stackNode->next=NULL;
    stackNode->data=value;
    return stackNode;
}

bool isEmpty(StackNode* root){
    return !root;
}

void push(StackNode** root,int value){
    StackNode* stackNode=newNode(value);
    stackNode->next=(*root);
    (*root)=stackNode;
    cout<<(*root)->data<<" pushed in stack\n";
}

int pop(StackNode** root){
    if(isEmpty(*root)){
        return INT_MIN;
    }
    else{
        StackNode* tmp=*root;
        *root=(*root)->next;
        int popped=tmp->data;
        free(tmp);

        return popped;
    }
}

int top(StackNode *root){
    return (root->data);
}

void display(StackNode* root){
    while(root!=NULL){
        cout<<(root->data)<<" ";
        root=root->next;
    }
}

int main()
{
    StackNode* root=NULL;

    push(&root,95);
    push(&root,65);
    push(&root,55);
    push(&root,15);
    push(&root,25);
    int a=pop(&root);

    display(root);
    return 0;
}
