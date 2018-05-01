//https://www.acmicpc.net/problem/2530
//2530번 인공지능 시계

#include <iostream>
using namespace std;

int main(){
    int h,m,s,time;
    cin>>h>>m>>s>>time;
    h+=time/3600;
    time%=3600;
    m+=time/60;
    time%=60;
    s+=time;
    if(s>=60){
        s-=60;
        m++;
    }
    if(m>=60){
        m-=60;
        h++;
    }
    if(h>=24)h%=24;
    printf("%d %d %d\n",h,m,s);
    return 0;
}
