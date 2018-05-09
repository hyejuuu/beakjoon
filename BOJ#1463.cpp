//https://www.acmicpc.net/problem/1463
//BOJ 1463번 1로 만들기

#include <iostream>
#include <cstring>
using namespace std;


int N,dp[1000001];

int func(int n){
    if(n==1)return 0;
    int &ret = dp[n];
    if(ret!=-1)return ret;
    ret=987654321;
    if(n%3==0)ret=min(ret,func(n/3)+1);
    if(n%2==0)ret=min(ret,func(n/2)+1);
    ret=min(ret,func(n-1)+1);
    return ret;
}

int main(){
    memset(dp,-1,sizeof(dp));
    cin>>N;
    printf("%d\n",func(N));
    return 0;
}
