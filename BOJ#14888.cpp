//https://www.acmicpc.net/problem/14888
//BOJ 14888 연산자 끼워넣기

#include <iostream>
using namespace std;

int N,A[101],operate[4],tmp[4];        //+,-,*,/
int mn=1000000000,mx=-1000000000;

void func(int add,int sub,int mul, int div,int sum,int cnt){
    if(cnt==N){
        if(sum>mx)mx=sum;
        if(sum<mn)mn=sum;
        return;
    }
    if(add!=0)func(add-1,sub,mul,div,sum+A[cnt],cnt+1);
    if(sub!=0)func(add,sub-1,mul,div,sum-A[cnt],cnt+1);
    if(mul!=0)func(add,sub,mul-1,div,sum*A[cnt],cnt+1);
    if(div!=0)func(add,sub,mul,div-1,sum/A[cnt],cnt+1);
}

int main(){    cin>>N;
    for(int i=0;i<N;i++)cin>>A[i];
    for(int i=0;i<4;i++)cin>>operate[i];
    func(operate[0],operate[1],operate[2],operate[3],A[0],1);
    printf("%d\n%d\n",mx,mn);
    return 0;
}
