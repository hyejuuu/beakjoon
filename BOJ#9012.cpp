//https://www.acmicpc.net/problem/9012
//BOJ 9012 괄호

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
	int T,len;
	stack<char> S;
	string PS;
	bool check = true;

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> PS;
		len = PS.length();		
		for (int i = 0; i < len; i++) {		//문자열의 길이만큼 loop
			if (PS[i] == '(')S.push(PS[i]);	//’(’가 들어오면 stack에 push
			else {
				if (!S.empty())S.pop();	    //비어있지 않을 때 )가 들어오면 (를 하나 pop
				else check = false;	        //비어있는데 )가 들어온 경우(쌍이 맞지 않기 때문에 X)
			}
		}

		if (!check||!S.empty())printf("NO\n");	//check가 false이거나 stack에 ‘(‘가 남아있을 경우
		else printf("YES\n");

		while (!S.empty())S.pop();		//stack이 비어있지 않으면 비워줌
		check = true;
	}

	return 0;
}