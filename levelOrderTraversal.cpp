class Solution
{
    public:
    
    //function to calculate height of tree
    int height(Node* node){
        
        if(node == NULL) return 0;
        
        int lheight = height(node->left);
        int rheight = height(node->right);
        
        if( lheight > rheight ){
            return ( lheight + 1 );
        }else{
            return ( rheight + 1 );
        }
        
    }
    
    //this is acting function which does recursive call for inputing level wise traversal
    void printValues(int d, Node *node,vector<int> *output){
        if(node == NULL) return;
        
        if(d==1){
            output->push_back(node->data);
        }
        printValues(d-1,node->left,output);
        printValues(d-1,node->right,output);
    }
    
    //this function will calling action function which adds values of tree in output vector
    void printLevelOrder(Node *node, vector<int> *output){
        
        int h = height(node);
        
        for(int i=1; i<=h;i++){
            printValues(i,node,output);
        }
        return;
    }
    
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
        vector<int> output;
      
        printLevelOrder( node, &output );
     
        return output;
    }
};