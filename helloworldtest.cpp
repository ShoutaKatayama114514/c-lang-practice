#include<stdio.h>
#include<iostream>
#include<iomanip>

int main() {
	char str[32];
	std::cout << "Hello,World.\n";
	std::cout << "•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢" << std::endl;
	std::cin >> std::setw(32) >> str;
	std::cout << "\nstr: " << str << std::endl;
	std::cin.ignore(1024, '\n');

	getchar();
	return 0;
}