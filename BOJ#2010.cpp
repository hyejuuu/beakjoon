//https://www.acmicpc.net/problem/2010
//BOJ 2010번 플러그

#include <iostream>
using namespace std;

int main(){
    int N,sum=0,multi;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>multi;
        sum+=multi;
    }
    printf("%d\n",sum-N+1);
    return 0;
}
