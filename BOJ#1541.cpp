//https://www.acmicpc.net/problem/1541
//BOJ 1541 잃어버린 괄호

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    string str;
    cin>>str;
    vector<int> num;
    vector<int> sign;
    bool minus = false;
    int result = 0;
    sign.push_back(1);
    int cur = 0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='+') {
            sign.push_back(1);
            num.push_back(cur);
            cur = 0;
        } else if(str[i]=='-'){
            sign.push_back(-1);
            num.push_back(cur);
            cur = 0;
        } else {
            cur = cur*10 + (str[i]-'0');
        }
    }
    num.push_back(cur);
    for(int i=0;i<num.size();i++){
        if(sign[i]==-1){
            minus = true;
        }
        if(minus) {
            result -= num[i];
        } else {
            result += num[i];
        }
    }
    cout<< result;
    return 0;
}
