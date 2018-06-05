//https://www.acmicpc.net/problem/11404
//BOJ 11404 플로이드

#include <iostream>
#include <algorithm>
#define INF 987654321
using namespace std;

int main(){
    int n,m,a,b,c;
    int weight[101][101];
    cin>>n>>m;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)weight[i][j]=0;
            else weight[i][j]=INF;
        }
    }

    for(int i=0;i<m;i++){
        cin>>a>>b>>c;
        weight[a-1][b-1] = min(weight[a-1][b-1],c);
    }

    //플로이드 와샬
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++) weight[j][k] = min(weight[j][k],weight[j][i]+weight[i][k]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(weight[i][j]!=INF) printf("%d ",weight[i][j]);
            else printf("0 ");
        }
        printf("\n");
    }
    
    return 0;
}
