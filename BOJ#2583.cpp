//https://www.acmicpc.net/problem/2583
//BOJ 2583번 영역 구하기

#include <iostream>
#include <algorithm>
using namespace std;

int M,N,K,x[2],y[2],cnt=0,area=0;
int arr[101][101]={0},visited[101][101]={0};
int pos[8]={1,-1,0,0,0,0,-1,1};
int result[101];

void dfs(int a,int b){
    visited[a][b]=1;
    arr[a][b]=1;
    cnt++;
    for(int i=0;i<4;i++){
        int next_x=a+pos[i];
        int next_y = b+pos[i+4];
        if(next_x>=0&&next_x<N&&next_y>=0&&next_y<M&&!visited[next_x][next_y]&&!arr[next_x][next_y]){
            dfs(next_x,next_y);
        }
    }
}

int main(){
    cin>>M>>N>>K;
    for(int i=0;i<K;i++){
        cin>>x[0]>>y[0]>>x[1]>>y[1];
        for(int j=x[0];j<x[1];j++){
            for(int k=y[0];k<y[1];k++) arr[j][k]=1;
        }
    }
    
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(arr[i][j]==0){
                dfs(i,j);
                result[area]=cnt;
                cnt=0;
                area++;
            }
        }
        
    }
    printf("%d\n",area);
    sort(result,result+area);
    for(int i=0;i<area;i++)printf("%d ",result[i]);
    printf("\n");
    return 0;
}
