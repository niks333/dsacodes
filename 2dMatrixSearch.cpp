#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int rows=matrix.size();
    //cout<<"rows: "<<rows<<endl;
    int columns=matrix[0].size();
    //cout<<"columns: "<<columns<<endl;
    int i=rows-1;
    
    while(true){
        if(matrix[i][0]<=target) break;
        i--;
        if(i<0) break;
    }
    cout<<"i: "<<i<<endl;
    if(i<0) return false;
    int flg=0;
    for(int j=0;j<columns;j++){
        if(matrix[i][j]==target){
            flg=1;
            break;
        }
    }
    if(flg==0) return false; 
    else return true;
}

int main(){
    vector<vector<int>> matrix
    {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };
    int n;
    cin>>n;
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<4;j++){
    //         cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    cout<<searchMatrix(matrix,n);
    return 0;
}