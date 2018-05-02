//https://www.acmicpc.net/problem/14501
//BOJ 14501번 퇴사

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int N,arr[16][2],mx=0;

void func(int cur,int sum){
    if(cur==N){
        mx=max(mx,sum);
        return;
    }
    if(cur+1<=N) func(cur+1,sum);
    if(cur+arr[cur][0]<=N) func(cur+arr[cur][0],sum+arr[cur][1]);
}

int main(){
    cin>>N;
    for(int i=0;i<N;i++) cin>>arr[i][0]>>arr[i][1];
    for(int i=0;i<N;i++) func(i,0);
    printf("%d\n",mx);
    return 0;
}
