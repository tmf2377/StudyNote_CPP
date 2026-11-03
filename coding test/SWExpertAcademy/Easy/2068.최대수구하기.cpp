#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	int T;

	cin >> T;
	for (int i = 0; i < T; i++) {
		int arr[10] = { 0, };
		int ans = 0;

		for (int j = 0; j < 10; j++) {
			cin >> arr[j];
		}

		for (int k = 0; k < 10; k++) {
			if (ans < arr[k]) {
				ans = arr[k];
			}
		}
		cout << "#" << i + 1 << " " << ans << endl;
	}
	return 0;
}