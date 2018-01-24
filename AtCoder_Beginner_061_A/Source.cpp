/*
–â‘è•¶
3 ‚Â‚Ì®” A,B,C ‚ª—^‚¦‚ç‚ê‚Ü‚·B
®” C ‚ª A ˆÈã ‚©‚Â B ˆÈ‰º‚Å‚ ‚é‚©‚ğ”»’è‚µ‚Ä‚­‚¾‚³‚¢B
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