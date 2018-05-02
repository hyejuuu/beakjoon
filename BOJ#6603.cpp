//https://www.acmicpc.net/problem/6603
//BOJ 6603번 로또

#include <iostream>
#include <cstring>
using namespace std;

int k,arr[13],visited[13];

void func(int n,int cur){
    if(cur==k&&n==6){
        for(int i=0;i<k;i++){
            if(visited[i]==1)printf("%d ",arr[i]);
        }
        printf("\n");
        return;
    }
    if(cur==k)return;
    visited[cur]=1;
    func(n+1,cur+1);      //선택한 경우
    visited[cur]=0;
    func(n,cur+1);    //선택하지 않은 경우
}

int main(){
    while(1){
        memset(visited,0,sizeof(visited));
        cin>>k;
        if(k==0)break;
        for(int i=0;i<k;i++)cin>>arr[i];
        func(0,0);
        printf("\n");
    }
    return 0;
}
