class Solution
{
    public:
    void sort012(int a[], int n)
    {
        //sort(a,a+n);
        int numberOf0=0,numberOf1=0,numberOf2=0;
        for(int i=0;i<n;i++){
            if(a[i]==0) numberOf0++;
            else if(a[i]==1) numberOf1++;
            else numberOf2++;
        }
        int iterator=0;
        for(int i=0;i<numberOf0;i++) a[iterator++]=0;
        for(int i=0;i<numberOf1;i++) a[iterator++]=1;
        for(int i=0;i<numberOf2;i++) a[iterator++]=2;
    }
    
};