#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main() {
	int N = 0;
	string num;
	int sum = 0;

	cin >> N;
	num = to_string(N);

	for (int i = 0; i < num.length(); i++) {
		sum += num[i] - '0';
	}
	cout << sum << endl;
	return 0;
}