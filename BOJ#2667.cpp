//https://www.acmicpc.net/problem/2667
//BOJ 2667번 단지번호붙이기

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int N,apart[25][25],cnt=0;
int pos[8]={1,-1,0,0,0,0,1,-1};
vector <int> v;
string str;

int dfs(int x, int y,int hnum){
    apart[x][y]=0;
    for(int i=0;i<4;i++){
        int next_x = x+pos[i];
        int next_y = y+pos[i+4];
        if(next_x<0||next_x>=N||next_y<0||next_y>=N||apart[next_x][next_y]==0)continue;
        hnum=dfs(next_x,next_y,hnum+1);
    }
    return hnum;
}

int main(){
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>str;
        for(int j=0;j<N;j++)apart[i][j]=str[j]-'0';
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(apart[i][j]==1){
                cnt++;
                v.push_back(dfs(i,j,0));
            }
        }
    }
    printf("%d\n",cnt);
    sort(v.begin(),v.end());
    for(auto i:v){
        printf("%d\n",i+1);
    }
    return 0;
}
