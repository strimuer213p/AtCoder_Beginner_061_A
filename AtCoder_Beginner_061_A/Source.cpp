/*
��蕶
3 �̐��� A,B,C ���^�����܂��B
���� C �� A �ȏ� ���� B �ȉ��ł��邩�𔻒肵�Ă��������B
*/
#include<iostream>

int main() {
	int a, b, c;
	bool flag;
	std::cin >> a >> b >> c;
	flag = a <= c && b >= c;

	std::cout << (flag ? "Yes" : "No") << std::endl;
	return 0;
}