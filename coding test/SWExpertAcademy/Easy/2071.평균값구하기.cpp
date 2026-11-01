#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int T = 0;
	float mean = 0;
	int input[10] = { 0, };

	cin >> T;
	for (int i = 0; i < T; i++) {
		mean = 0;
		for (int j = 0; j < 10; j++) {
			cin >> input[j];
			mean += input[j];
		}
		mean = round(mean /= 10);
		cout << "#" << i + 1 << " " << mean << endl;
	}

	return 0;
}