struct Node* reverseList(struct Node *head)
    {
       /*
        //This is iterstive approach
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
       return head;*/
       
       //This is recursive approach
       if(head==NULL || head->next == NULL ){
           return head;
       }
       
       struct Node* rest = reverseList( head->next );
       
       head->next->next = head;
       
       head->next = NULL;
       
       return rest;
    }
