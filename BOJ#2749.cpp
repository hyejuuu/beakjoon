//https://www.acmicpc.net/problem/2749
//BOJ 2749 피보나치 수 3

#include <iostream>
using namespace std;

int main(){
    long long N,arr[1500001]={0,1};
    cin>>N;
    for(int i=2;i<1500000;i++) arr[i] = (arr[i-1]+arr[i-2])%1000000;
    printf("%lld\n",arr[N%1500000]);
    return 0;
}