//https://www.acmicpc.net/problem/1157
//BOJ 1157번 단어 공부

#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    int arpa[26]={0},cnt,mx=0,ch=0;
    char idx=0;
    cin>>str;
    for(int i=65;i<91;i++){
        cnt=0;
        for(int j=0;j<(int)str.size();j++){
            if(str[j]==i||str[j]==i+32)cnt++;
        }
        arpa[i-'A']=cnt;
    }
    
    for(int i=0;i<26;i++){
        if(mx<arpa[i]){
            mx=arpa[i];
            idx=i+'A';
            ch=0;
        }
        else if(mx==arpa[i])ch=1;
    }
    if(ch)printf("?\n");
    else printf("%c\n",idx);
    return 0;
}

