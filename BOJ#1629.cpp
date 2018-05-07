//https://www.acmicpc.net/problem/1629
//BOJ 1629번 곱셈

#include <iostream>
#include <math.h>
using namespace std;

long long A,B,C;

long long func(long long a, long long b){
    if(b==0)return 1;
    if(b==1)return a%C;
    if(b%2==0){
        b/=2;
        return func((a*a)%C,b)%C;
    }
    else{
        b=(b-1)/2;
        return (a*func((a*a)%C,b))%C;
    }
}

int main(){
    cin>>A>>B>>C;
    printf("%lld\n",func(A,B));
    return 0;
}
