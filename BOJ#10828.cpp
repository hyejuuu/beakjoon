//https://www.acmicpc.net/problem/10828
//BOJ 10828번 스택

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
	int N;
	string cmd;
	stack<int> S;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> cmd;
		if (cmd == "push") {
			int num;
			cin >> num;
			S.push(num);
		}
		else if (cmd == "pop") {
			if (S.empty())printf("-1\n");
			else {
				printf("%d\n", S.top());
				S.pop();
			}
		}
		else if (cmd == "size") {
			printf("%d\n", S.size());
		}
		else if (cmd == "empty") {
			printf("%d\n",S.empty());
		}
		else {
			if (S.empty())printf("-1\n");
			else printf("%d\n", S.top());
		}
	}
	return 0;
}
[출처] 10828 <스택>|작성자 혜주차장

