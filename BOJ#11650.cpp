//https://www.acmicpc.net/problem/11650
//BOJ 11650번 좌표 정렬하기

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N,x,y;
    vector <pair<int,int>> v;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>x>>y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end());
    for(auto i:v){
        printf("%d %d\n",i.first,i.second);
    }
    return 0;
}
