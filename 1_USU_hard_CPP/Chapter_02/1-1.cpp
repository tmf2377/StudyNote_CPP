#include <iostream>
using namespace std;

void Plus(int &num1);
void Sign(int &num2);

int main(void) {
	int a;
	int b;

	cout << "1 더한 값: ";
	cin >> a;
	cout << "부호 바꾼 값: ";
	cin >> b;

	Plus(a);
	Sign(b);

	cout << "1 더한 값: " << a << endl;
	cout << "부호 바꾼 값: " << b << endl;

	return 0;
}

void Plus(int &num1) {
	num1 += 1;
}

void Sign(int &num2) {
	num2 = -num2;
}