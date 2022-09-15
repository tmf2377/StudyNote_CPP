#include <iostream>
using namespace std;

int main(void) {

	const int num = 12;
	const int* p = &num;
	const int& ref = num;

	cout << *p << endl;
	cout << ref << endl;

	return 0;
}