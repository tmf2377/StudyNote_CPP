#include <stdio.h>
#include <iostream>
using namespace std;

/*숫자 N은 아래와 같다.
N=2a x 3b x 5c x 7d x 11e
N이 주어질 때 a, b, c, d, e 를 출력하라.
[제약 사항]
N은 2 이상 10,000,000 이하이다.
[입력]
가장 첫 줄에는 테스트 케이스의 개수 T가 주어지고, 그 아래로 각 테스트 케이스가 주어진다.
각 테스트 케이스의 첫 번째 줄에 N 이 주어진다.
[출력]
출력의 각 줄은 '#t'로 시작하고, 공백을 한 칸 둔 다음 정답을 출력한다.
(t는 테스트 케이스의 번호를 의미하며 1부터 시작한다.)*/

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