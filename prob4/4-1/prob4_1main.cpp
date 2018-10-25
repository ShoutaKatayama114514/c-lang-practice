#include<iostream>
#include "prob4_1number.h"

using namespace std;

int main() {
	Number* pN;
	pN = new Number();
	pN->setNumbers(1, 2);
	cout << pN->getAdd() << endl;
	delete pN;
	return 0;
}
