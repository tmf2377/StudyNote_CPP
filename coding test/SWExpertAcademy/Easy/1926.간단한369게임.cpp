#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main() {
	int N;
	string len;
	int a;
	int flag;

	cin >> N;
	for (int i = 0; i < N; i++) {
		len = to_string(i + 1);
		a = len.length();

		flag = 0;
		for (int j = 0; j < a; j++) {
			if ((len[j]-'0') % 3 == 0 && len[j] != '0')  flag++; 
		}
		if (flag == 0) {
			cout << (i + 1);
		} else {
			for (int k = 0; k < flag; k++) {
				cout << "-";
			}
		}
		cout << " ";
	}

	return 0;
}