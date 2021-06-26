int isPlaindrome(char S[])
{
    int Ssize=strlen(S);
    int i=0,j=Ssize-1;
    while(i<j){
        if(S[i]!=S[j]) break;
        i++;j--;
    }
    if(i<j) return 0;
    return 1;
}