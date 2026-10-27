#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	int T;
	int N;
	int a, b, c, d, e;

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> N;
		a = 0; b = 0; c = 0; d = 0; e = 0;
		while (N % 2 == 0) {
			N /= 2;
			a++;
		}
		while (N % 3 == 0) {
			N /= 3;
			b++;
		}
		while (N % 5 == 0) {
			N /= 5;
			c++;
		}
		while (N % 7 == 0) {
			N /= 7;
			d++;
		}
		while (N % 11 == 0) {
			N /= 11;
			e++;
		}

		cout << "#" << i + 1 << " " << a << " " <<  b << " " << c << " " << d << " " << e << endl;
	}

	return 0;
}