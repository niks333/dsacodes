class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        // code here          
        vector<int> output;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                output.push_back(matrix[i][j]);
            }
        }
        int n=output.size();
        sort(output.begin(),output.end());
        return output[n/2];
    }
};