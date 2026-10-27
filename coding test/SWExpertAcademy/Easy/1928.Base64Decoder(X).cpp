#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	int T = 0;
	string encoding; //암호화된 문자열
	string bit; //총 문자열 bit
	string decoding = "a"; //해독한 문자열
	int bitnum[100000]; //비트..


	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> encoding;
		int j = 0;
		while (encoding[j] != NULL) {
			if ('A' <= encoding[j] && encoding[j] <= 'Z') {
				bitnum[j] = int(encoding[j]) - 65;
			}
			else if ('a' <= encoding[j] && encoding[j] <= 'z') {
				bitnum[j] = int(encoding[j]) - 71;
			}
			else if ('0' <= encoding[j] && encoding[j] <= '9') {
				bitnum[j] = int(encoding[j]) + 4;
			}
			else if ('+' == encoding[j]) {
				bitnum[j] = int(encoding[j]) + 19;
			}
			else if ('/' == encoding[j]) {
				bitnum[j] = int(encoding[j]) + 16;
			}
			else {
				cout << "error" << endl;
			}
			for (int h = 0; h < 8; h++) {
				bit = bitnum[j] & 1;
				bitnum[j] = bitnum[j] >> 1;
			}
			j++;
		}
		//cout << encoding<<endl;
		cout << "#" << i + 1 << " " << decoding << endl;
	}
	return 0;
}