#include <iostream>
using namespace std;

void Plus(int &num1);
void Sign(int &num2);

int main(void) {
	int a;
	int b;

	cout << "1 ���� ��: ";
	cin >> a;
	cout << "��ȣ �ٲ� ��: ";
	cin >> b;

	Plus(a);
	Sign(b);

	cout << "1 ���� ��: " << a << endl;
	cout << "��ȣ �ٲ� ��: " << b << endl;

	return 0;
}

void Plus(int &num1) {
	num1 += 1;
}

void Sign(int &num2) {
	num2 = -num2;
}