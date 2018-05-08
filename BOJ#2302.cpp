//https://www.acmicpc.net/problem/2302
//BOJ 2302번 극장좌석

#include <iostream>
using namespace std;

int main(){
    long long N,M,sum=1,mx=0,a,b=0;
    long long vip[41]={0,},dp[41]={1,1,};
    cin>>N>>M;
    for(int i=0;i<M;i++){
        cin>>a;
        vip[i]=a-b-1;
        b=a;
        if(mx<vip[i])mx=vip[i];
    }
    
    vip[M]=N-b;
    if(mx<vip[M])mx=vip[M];
    
    for(int i=2;i<=mx;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    
    for(int i=0;i<=M;i++){
        sum*=dp[vip[i]];
    }
    printf("%lld\n",sum);
    return 0;
}
