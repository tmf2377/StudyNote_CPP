#include <iostream>

int main(void) {

	char name[100];
	char number[100];

	std::cout << "�̸� �Է�:";
	std::cin >> name;

	std::cout << "��ȭ��ȣ �Է�:";
	std::cin >> number;

	std::cout << "�̸�:" << name << std::endl << "��ȣ:" << number << std::endl;

	return 0;
}