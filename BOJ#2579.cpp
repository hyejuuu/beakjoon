//https://www.acmicpc.net/problem/2579
//BOJ 2579번 계단 오르기

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N,stair[301],dp[301];
    cin>>N;
    for(int i=0;i<N;i++)cin>>stair[i];
    dp[0]=stair[0];
    dp[1]=stair[0]+stair[1];
    dp[2]=max(stair[0],stair[1])+stair[2];
    for(int i=3;i<N;i++){
        dp[i]=max(dp[i-3]+stair[i-1],dp[i-2])+stair[i];
    }
    printf("%d\n",dp[N-1]);
    return 0;
}
