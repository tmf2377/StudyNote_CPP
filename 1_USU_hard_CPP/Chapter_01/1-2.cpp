#include <iostream>

int main(void) {

	char name[100];
	char number[100];

	std::cout << "이름 입력:";
	std::cin >> name;

	std::cout << "전화번호 입력:";
	std::cin >> number;

	std::cout << "이름:" << name << std::endl << "번호:" << number << std::endl;

	return 0;
}