/*
問題文
3 つの整数 A,B,C が与えられます。
整数 C が A 以上 かつ B 以下であるかを判定してください。
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