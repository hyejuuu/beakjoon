//https://www.acmicpc.net/problem/4641
//BOJ 4641번 Doubles

#include <iostream>
using namespace std;

int main(){
    int list[16],i,cnt;
    while(1){
        cnt=0;
        for(i=0;;i++){
            cin>>list[i];
            if(list[i]==0)break;
            if(list[i]==-1)return 0;
        }
        for(int j=0;j<i;j++){
            for(int k=0;k<i;k++){
                if(list[j]*2==list[k])cnt++;
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}
