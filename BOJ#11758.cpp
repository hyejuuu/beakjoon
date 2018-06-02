//https://www.acmicpc.net/problem/11758
//BOJ 11758 CCW

#include <iostream>
using namespace std;

int main(){
    int p[3][2],direct;
    for(int i=0;i<3;i++)cin>>p[i][0]>>p[i][1];
    direct = (p[0][0] * p[1][1] + p[1][0] * p[2][1] + p[2][0] * p[0][1]) - (p[0][1]*p[1][0]+p[1][1]*p[2][0]+p[2][1]*p[0][0]);
    //(x1*y2 + x2*y3 + x3*y1) - (y1*x2 + y2*x3 + y3*x1)
    if(direct<0) printf("-1\n");
    else if(direct>0) printf("1\n");
    else printf("0\n");
    return 0;
}
