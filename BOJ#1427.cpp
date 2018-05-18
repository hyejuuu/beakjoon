//https://www.acmicpc.net/problem/1427
//BOJ 1427번 소트인사이드

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string str;
    int arr[10],len;
    cin>>str;
    len = (int)str.size();
    for(int i=0;i<len;i++)arr[i]=str[i]-'0';
    sort(arr,arr+len,greater<>());
    for(int i=0;i<len;i++)printf("%d",arr[i]);
    printf("\n");
}
