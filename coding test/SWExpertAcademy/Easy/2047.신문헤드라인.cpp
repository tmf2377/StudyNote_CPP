#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	// freopen("input.txt", "r", stdin);
	string d;
	int i = 0;

	cin >> d;

	while (d[i] != NULL) {
		if ('a' <= d[i] && d[i] <= 'z') {
			d[i] -= 32;
		}
		i++;
	}
	cout << d;
	return 0;
}