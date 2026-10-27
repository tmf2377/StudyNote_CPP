#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	int T = 0;
	int N = 0;
	int sum = 0;

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> N;

		sum = 0;
		for (int j = 0; j < N; j++) {
			if (j % 2) {
				sum -= j + 1;
			}
			else {
				sum += j + 1;
			}
		}
		cout << "#" << i + 1 << " " << sum << endl;
	}
	return 0;
}