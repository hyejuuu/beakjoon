//https://www.acmicpc.net/problem/2908
//BOJ 2908번 상수

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string A,B;
    cin>>A>>B;
    reverse(A.begin(),A.end());
    reverse(B.begin(),B.end());
    printf("%d\n",max(stoi(A),stoi(B)));
    return 0;
}
