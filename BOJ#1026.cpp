//https://www.acmicpc.net/problem/1026
//BOJ 1026번 보물

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int S,A[51],B[51],sum=0;
    cin>>S;
    for(int i=0;i<S;i++) cin>>A[i];
    for(int i=0;i<S;i++) cin>>B[i];
    sort(A,A+S);
    sort(B,B+S,greater<>());
    for(int i=0;i<S;i++)sum+=A[i]*B[i];
    printf("%d\n",sum);
}
