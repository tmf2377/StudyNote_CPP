#include <iostream>

int main(void) {
	// preconditions : input integer number
	// postconditions : print sum of input numbers
	
	int val, sum = 0;

	for (int i = 0; i < 5; i++) {
		std::cout << i + 1 << "��° ���� �Է�:";
		std::cin >> val;
		sum += val;
	}

	std::cout << "�հ�:" << sum << std::endl;

	return 0;
}