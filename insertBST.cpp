//Function to insert a node in a BST.
Node* insert(Node* root, int Key)
{
    if(root==NULL){
        return new Node(Key);
    }
    
    if(Key<root->data){
        root->left=insert(root->left,Key);
    }
    if(Key>root->data){
        root->right=insert(root->right,Key);
    }
    return root;
}
