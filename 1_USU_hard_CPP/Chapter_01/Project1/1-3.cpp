#include <iostream>

int main(void) {

	int val;
	
	std::cout << "구구단을 출력할 숫자를 입력하세요:";
	std::cin >> val;

	for (int i = 0; i < 9; i++) {
		std::cout << val << " x " << i + 1 << " = " << (i + 1) * val << std::endl;

	}
	return 0;

}