// C++ program to find a pair with given sum x.
#include<bits/stdc++.h>
using namespace std;
 
// structure of node of doubly linked list
struct Node
{
    int data;
    struct Node *next, *prev;
};
 
// Function to find pair whose sum equal to given value x.
void pairSum(struct Node *head, int x)
{
    Node* first=head;
    Node* last=head;
    
    while(last->next!=NULL) last=last->next;
    //last = last element
    
    //Now we will traverse both first and last
    //first from starting and last from end
    //we will take sum of them
    //if sum is equal to x then return pair
    //else if sum is greater than x then decrement last
    //else if sum is less than x then increment first
    
    bool found = false;
    while(first != last && last->next != first){
        int  sum = first->data + last->data;
        
        if(sum == x){
            cout<<"("<<last->data<<","<< first->data<<")";
            // if(first->data == first->next->data){
            //     first=first->next;
            // }
            // if(last->data == last->prev->data){
            //     last = last->prev;
            // }
            // if(first->data != first->next->data && last->data != last->prev->data){
            found=true;
                first=first->next;
                last=last->prev;
            //}
        }
        else if(sum > x){
            last=last->prev;
        }
        else if(sum < x){
            first=first->next;
        }
        
    }
    if(!found)  cout<<"Not Found";
}
 
// A utility function to insert a new node at the
// beginning of doubly linked list
void insert(struct Node **head, int data)
{
    struct Node *temp = new Node;
    temp->data = data;
    temp->next = temp->prev = NULL;
    if (!(*head))
        (*head) = temp;
    else
    {
        temp->next = *head;
        (*head)->prev = temp;
        (*head) = temp;
    }
}
 
// Driver program
int main()
{
    struct Node *head = NULL;
    insert(&head, 9);
    insert(&head, 8);
    insert(&head, 6);
    insert(&head, 5);
    insert(&head, 4);
    insert(&head, 2);
    insert(&head, 1);
    int x = 2;
 
    pairSum(head, x);
 
    return 0;
}
