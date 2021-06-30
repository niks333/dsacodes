	/*THIS IS MY FIRST TIME CODE WITH THE HELP OF ALGO*/

/*
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
*/
	/*THIS IS MY CODE*/

//this function takes root node as input and returns height of that tree
int height(Node *node){
    //this is a recursive function
    if(node==NULL) return 0;//this is the base case
    //main code
    //creat two variables for storing heights of left and right subtree of current node
    int lheight=height(node->left);
    int rheight=height(node->right);
    
    //who have max height will be height of tree
    if(lheight>rheight){
        return (lheight+1);
    }
    else{
        return (rheight+1);
    }
}

//this function adds elements in output array
void addElements(int d,Node* node,vector<int> *output){
    //this is a recursive function
    if(node==NULL) return;
    //if height is 1 then we have to print value at that node
    if(d==1){
        output->push_back(node->data);
    }
    //if height is greater than 1 then we must calculate for each subtree
    addElements(d-1,node->left,output);
    addElements(d-1,node->right,output);
}

class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
      //as we have to return a vector as a output first create one
      vector<int> output;
      
      //now we have to calculate height of tree for that we will wirte a function height()
      int h=height(node);
      //now we will add level wise elements in our output array
      for(int i=1;i<=h;i++){
          addElements(i,node,&output);
      }
      //now we have our values in output array
      return output;
    }
};
