#include <iostream>

int main(void) {

	int val, sum;
    
	while (1) {

		std::cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
		std::cin >> val;
		if (val == -1) {
			std::cout << "프로그램을 종료합니다.";
			break;
		}
		else {
			sum = 50;
			sum += val * 0.12;
			std::cout << "이번 달 급여: " << sum << "만원" << std::endl;
		}
	}
	
	return 0;
}