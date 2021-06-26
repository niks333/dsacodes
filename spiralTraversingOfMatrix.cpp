class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        vector<int> output;
        int startRow=0,startCol=0;
        while(startRow<r && startCol<c){
            for(int i=startCol;i<c;i++){
                output.push_back(matrix[startRow][i]);
            }
            startRow+=1;
            for(int i=startRow;i<r;i++){
                output.push_back(matrix[i][c-1]);
            }
            c-=1;
            if(startRow<r){
                for(int i=c-1;i>=startCol;i--){
                    output.push_back(matrix[r-1][i]);
                }
                r-=1;
            }
            if(startCol<c){
                for(int i=r-1;i>=startRow;i--){
                    output.push_back(matrix[i][startCol]);
                }
                startCol+=1;
            }
        }
        return output;
    }
};