//https://www.acmicpc.net/problem/14501
//BOJ 14501 퇴사

#include <iostream>
using namespace std;

int N,table[15][15],mx=0;;

void func(int day,int sum){
    if(day>=N){
        if(mx<sum)mx=sum;
        return;
    }
    func(day+1,sum);
    if(day+table[day][0]<=N) func(day+table[day][0],sum+table[day][1]);
}

int main(){
    cin>>N;
    for(int i=0;i<N;i++)cin>>table[i][0]>>table[i][1];
    func(0,0);
    printf("%d\n",mx);
    return 0;
}
