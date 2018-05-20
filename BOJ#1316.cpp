//https://www.acmicpc.net/problem/1316
//BOJ 1316번 그룹 단어 체커

#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main(){
    string str;
    int cnt=0,N,alpa[26];
    cin>>N;
    for(int i=0;i<N;i++){
        memset(alpa,0,sizeof(alpa));
        cin>>str;
        alpa[str[0]-'a']=1;
        for(int j=1;j<(int)str.size();j++){
            if((str[j-1]!=str[j])&&(alpa[str[j]-'a']!=0)){
                cnt++;
                break;
            }
            alpa[str[j]-'a']++;
        }
    }
    printf("%d\n",N-cnt);
    return 0;
}
