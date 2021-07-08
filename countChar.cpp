#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    int freqChar[255]={0};
    for(int i=0;i<str.length();i++){
        freqChar[str[i]]++;
    }
    for(int i=0;i<255;i++){
        if(freqChar[i]>1){
            cout<<char(i)<<", count = "<<freqChar[i]<<"\n";
        }
    }
    return 0;
}