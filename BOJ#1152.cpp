//https://www.acmicpc.net/problem/1152
//BOJ 1152번 단어의 개수

#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    int cnt=0;
    getline(cin,str);
    for(int i=0;i<(int)str.size();i++){
        if(str[i]==' ')cnt++;
    }
    if(str.at(0)==' ')cnt--;
    if(str.at(str.size()-1)==' ')cnt--;
    printf("%d\n",cnt+1);
    return 0;
}
