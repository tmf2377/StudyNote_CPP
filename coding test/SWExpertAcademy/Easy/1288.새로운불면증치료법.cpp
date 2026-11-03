#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

// 배열이 전부 true인지 확인
bool Check(bool sum[10]) {
	int a = 0;
	for (int i = 0; i < 10; i++) {
		if (sum[i] == true)
			a++;
	}
	if (a == 10)
		return true;
	else
		return false;
}

int main() {
	int T = 0; // 반복 횟수
	int N = 0; // 입력 N값
	int result = 0; 
	string num;

	cin >> T;
	for (int i = 0; i < T; i++) {
		result = 0;
		bool sum[10] = { 0, };
		bool check = false;
		cin >> N;

		while (1) {
			result++;
			num = to_string(N * result); //1295일 때 num='1295'
			for (int k = 0; k < num.length(); k++) { //1295를 돌면서 그 번째 배열을 true로 바꿔
				sum[num[k] - '0'] = true;
			}
			if (Check(sum))
				break;
		}
		cout << "#" << i + 1 << " " << result * N << endl;
	}
	return 0;
}