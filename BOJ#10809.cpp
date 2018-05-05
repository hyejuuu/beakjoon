//https://www.acmicpc.net/problem/10809
//BOJ 10809번 알파벳 찾기

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){
    int arpa[26];
    string str;
    memset(arpa,-1,sizeof(arpa));
    cin>>str;
    for(int i=0;i<(int)str.size();i++){
        if(arpa[str[i]-'a']==-1) arpa[str[i]-'a']=i;
    }
    for(int i=0;i<26;i++) printf("%d ",arpa[i]);
    printf("\n");
    return 0;
}
