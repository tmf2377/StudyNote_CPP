#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	int T = 0;
	int a = 0;
	int b = 0;
	char result;

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> a >> b;
		if (a > b)
			result = '>';
		else if (a == b)
			result = '=';
		else
			result = '<';
		
		cout << "#" << i + 1 << " " << result << endl;
	}

	return 0;
}