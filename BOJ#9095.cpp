//https://www.acmicpc.net/problem/9095
//BOJ 9095 1,2,3 더하기

#include <iostream>
#include <algorithm>
using namespace std;

int dp[301];
int input[301];

int main() {
	ios::sync_with_stdio(false);
	int T,num;
	int mx=0;
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> input[i];
		if (mx < input[i])mx = input[i];
	}

	dp[0] = 1; dp[1] = 2; dp[2] = 4;
	for (int i = 3; i < mx; i++) {
		dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
	}

	for (int i = 0; i < T; i++) {
		printf("%d\n", dp[input[i]-1]);
	}
	
	return 0;
}