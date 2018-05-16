//https://www.acmicpc.net/problem/3062
//BOJ 3062번 수 뒤집기

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int T, sum = 0;
	string N,CN;
	cin >> T;
	while (T--) {
		cin >> N;
		CN = N;
		reverse(CN.begin(), CN.end());
		sum = stoi(N) + stoi(CN);
		N = to_string(sum);
		CN = N;
		reverse(CN.begin(), CN.end());
		if (N!=CN)printf("NO\n");
		else printf("YES\n");
	}
	return 0;
}
[출처] 3062 <수 뒤집기>|작성자 혜주차장