#include <stdio.h>
#include <iostream>
using namespace std;
/*다음과 같이 Encoding 을 한다.
1. 우선 24비트 버퍼에 위쪽(MSB)부터 한 byte(8bit)씩 3 byte의 문자를 집어넣는다.
2. 버퍼의 위쪽부터 6비트씩 잘라 그 값을 읽고, 각각의 값을 아래 [표-1] 의 문자로 Encoding 한다.
입력으로 Base64 Encoding 된 String 이 주어졌을 때, 해당 String 을 Decoding 하여, 원문을 출력하는 프로그램을 작성하시오.
[제약사항]
문자열의 길이는 항상 4의 배수로 주어진다.
그리고 문자열의 길이는 100000을 넘지 않는다.
[입력]
입력은 첫 줄에 총 테스트 케이스의 개수 T가 온다.
다음 줄부터 각 테스트 케이스가 주어진다.
테스트 케이스는 Encoding 된 상태로 주어지는 문자열이다.
[출력]
테스트 케이스 t에 대한 결과는 “#t”을 찍고, 한 칸 띄고, 정답을 출력한다.
(t는 테스트 케이스의 번호를 의미하며 1부터 시작한다.)*/

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