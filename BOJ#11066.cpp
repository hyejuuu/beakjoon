//https://www.acmicpc.net/problem/11066
//BOJ 11066번 파일합치기
//dp[j][i]는 j~i까지 합친 파일의 최소비용

#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int T,K,sum[501],dp[501][501],s;

int main(){
    cin>>T;
    while(T--){
        memset(dp,0,sizeof(dp));
        cin>>K;
        for(int i=0;i<K;i++){
            cin>>s;
            sum[i]=s+sum[i-1];
        }
        
        for(int i=1;i<K;i++){
            for(int j=i-1;j>=0;j--){
                dp[j][i]=987654321;
                for(int k=j;k<=i;k++){
                    dp[j][i]=min(dp[j][i],dp[j][k]+dp[k+1][i]);
                }
                dp[j][i]+=sum[i]-sum[j-1];
            }
        }
        printf("%d\n",dp[0][K-1]);
    }
    return 0;
}
