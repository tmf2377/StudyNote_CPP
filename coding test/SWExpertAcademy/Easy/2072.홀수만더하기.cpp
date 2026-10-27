#include <stdio.h>
#include <iostream>
using namespace std;

int main() {

	int T; //TestCase
	int sum;
	int a;

	cin >> T;

	for (int i = 0; i < T; i++) {
		sum = 0;
		a = 0;
		for (int j = 0; j < 10; j++) {
			cin >> a;
			if (a % 2 == 1) {
				sum += a;
			}
		}
		cout << "#" << i + 1 << " " << sum << endl;
	}

	return 0;
}