#include <iostream>

int main(void) {
	// preconditions : input name, phone number
	// postconditions : print name,  phone number

	char name[100];
	char number[100];

	std::cout << "�̸� �Է�:";
	std::cin >> name;

	std::cout << "��ȭ��ȣ �Է�:";
	std::cin >> number;

	std::cout << "�̸�:" << name << std::endl << "��ȣ:" << number << std::endl;

	return 0;
}