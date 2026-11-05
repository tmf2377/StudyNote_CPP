#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	int T = 0;
	string input;

	cin >> T;
	for (int i = 0; i < T; i++) {
		bool result = 1;
		int palindrome = 0;

		cin >> input;
		for (int j = 0; j < input.length() / 2; j++) {
			if (input[j] != input[input.length() - (j + 1)]) {
				result = false;
				break;
			}
		}

		cout << "#" << i + 1 << " " << result << endl;
	}
	return 0;
}