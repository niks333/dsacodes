struct Node* reverseList(struct Node *head)
    {
       struct Node* curr=head;
       struct Node* prev=NULL;
       struct Node* next=NULL;
       while(curr!=NULL){
           next=curr->next;
           curr->next=prev;
           prev=curr;
           curr=next;
       }
       head=prev;
       return head;
    }
