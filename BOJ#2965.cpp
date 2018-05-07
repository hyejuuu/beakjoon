//https://www.acmicpc.net/problem/2965
//BOJ 2965번 캥거루 세마리

#include <iostream>
using namespace std;

int main(){
    int A,B,C,cnt=0,gap[2];
    cin>>A>>B>>C;
    while(1){
        gap[0]=B-A;
        gap[1]=C-B;
        if(gap[0]==1&&gap[1]==1)break;
        if(gap[0]<gap[1]){
            A=B+1;
            swap(A,B);
        }else{
            C=B-1;
            swap(B,C);
        }
        cnt++;
    }
    printf("%d\n",cnt);
    return 0;
}
