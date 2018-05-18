//https://www.acmicpc.net/problem/1181
//BOJ 1181번 단어 정렬

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(){
    int N;
    string str;
    vector <string> v[51];
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>str;
        v[str.size()].push_back(str);
    }
    for(int i=0;i<51;i++){
        sort(v[i].begin(),v[i].end());
        v[i].erase(unique(v[i].begin(),v[i].end()),v[i].end());
        //unique : 중복 제거
        for(auto j : v[i]){
            cout<<j<<"\n";
        }
    }
}
