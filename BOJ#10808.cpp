//https://www.acmicpc.net/problem/10808
//BOJ 10808 알파벳 개수

#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    int alpa[26]={0};
    cin>>str;
    for(int i=0;i<(int)str.size();i++)alpa[str[i]-'a']++;
    for(int i=0;i<26;i++)printf("%d ",alpa[i]);
    printf("\n");
    return 0;
}
