vector<int> find(int arr[], int n , int x )
{
    int firstOcc=-1,lastOcc=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            firstOcc=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(arr[i]==x){
            lastOcc=i;
            break;
        }
    }
    vector<int> output(2);
    output[0]=firstOcc;
    output[1]=lastOcc;
    return output;
}