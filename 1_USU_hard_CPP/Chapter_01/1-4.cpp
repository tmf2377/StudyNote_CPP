#include <iostream>

int main(void) {
	// preconditions : input integer
	// postconditions : print salary (50+'int'*0.12)

	int val, sum;
    
	while (1) {

		std::cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";
		std::cin >> val;
		if (val == -1) {
			std::cout << "���α׷��� �����մϴ�.";
			break;
		}
		else {
			sum = 50;
			sum += val * 0.12;
			std::cout << "�̹� �� �޿�: " << sum << "����" << std::endl;
		}
	}
	
	return 0;
}