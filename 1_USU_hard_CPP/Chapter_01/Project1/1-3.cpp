#include <iostream>

int main(void) {

	int val;
	
	std::cout << "�������� ����� ���ڸ� �Է��ϼ���:";
	std::cin >> val;

	for (int i = 0; i < 9; i++) {
		std::cout << val << " x " << i + 1 << " = " << (i + 1) * val << std::endl;

	}
	return 0;

}