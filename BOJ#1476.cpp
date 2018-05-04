//https://www.acmicpc.net/problem/1476
//BOJ 1476번 날짜 계산

#include <iostream>
using namespace std;

int main(){
    int E,S,M,cnt=1,e=1,s=1,m=1;
    cin>>E>>S>>M;
    while(cnt++){
        if(E==e&&S==s&&M==m)break;
        e=e%15+1;
        s=s%28+1;
        m=m%19+1;
    }
    printf("%d\n",cnt-1);
    return 0;
}
