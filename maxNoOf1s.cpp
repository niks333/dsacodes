//User function template for C++
class Solution{
public:
	
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    /*
	    //by brut force{O(n*m)} we can find it easily but complexity is o(n+m) 
	    int index=-1,max=0,count=0;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            if(arr[i][j]==1) count++;
	        }
	        if(count>max){
	            max=count;
	            index=i;
	        }
	        count=0;
	    }
	    return index;           //TIME : 0.60 SEC
	}//THIS PROBLEM CAN BE SOLVED BY BRUTE FORCE
	*/
    
    /*
    //  MY ANOTHER SOLUTION BY USING CONDITION THAT ROWS ARE 
    //  SORTED AND ONLY CONTAINS 0'S AND 1'S
    
    int index=-1,flg=0;
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            if(arr[i][j]==1){
                index=i;
                flg=1;
            }
            if(flg==1) break;
        }
        if(flg==1) break;
    }
    return index;
	}           //TIME : 0.60 SEC
	*/
	
	/*METHOD SUGGESTED IN EDITORIAL*/
	int index=0;
	int j=m-1;
	for(int i=0;i<n;i++){
	    bool flag=false;
	    while(j>=0 && arr[i][j]==1){
	        j=j-1;
	        flag=true;
	    }
	    if(flag){
	        index=i;
	    }
	    if(index==0 && arr[0][m-1]==0){
	        index=-1;
	    }
	}
	return index;
	}                           //TIME : 0.59 SEC
};
