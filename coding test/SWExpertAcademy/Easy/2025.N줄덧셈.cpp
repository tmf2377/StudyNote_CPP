#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	int T = 0;
	int sum = 0;

	cin >> T;
	for (int i = 0; i < T; i++) {
		sum += (i + 1);
	}
	cout << sum << endl;

	return 0;
}