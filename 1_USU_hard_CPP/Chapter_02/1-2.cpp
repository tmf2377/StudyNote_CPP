#include <iostream>
using namespace std;
// 변수의 값이 아니라 가리키는 대상을 바꾸려면 포인터와 참조자를 같이 써야함

void SwapPointer(int* (&ref1), int* (&ref2));
// before : void SwapPointer(int& ref1, int& ref2);

int main(void) {

	int num1 = 5;
	int* ptr1 = &num1;
	int num2 = 10;
	int* ptr2 = &num2;

	cout << "*ptr1:" << *ptr1 << endl;
	cout << "*ptr2:" << *ptr2 << endl;

	SwapPointer(ptr1, ptr2);

	cout << "*ptr1:" << *ptr1 << endl;
	cout << "*ptr2:" << *ptr2 << endl;

	return 0;
}

void SwapPointer(int* (&ref1), int* (&ref2)) {
	int *temp = ref1; // before : int temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}