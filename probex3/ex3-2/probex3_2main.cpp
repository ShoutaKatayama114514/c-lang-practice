#include <iostream>
#include "probex3_2collection.h"

using namespace std;

int main() {
	//  �z��ϐ��̒�`
	int array[] = { 1,5,4,2,3 };
	Collection<int>* c = new Collection<int>(array, 5);
	c->showArray();
	cout << "�ő�l : " << c->getMax() << endl;
	cout << "�ŏ��l : " << c->getMin() << endl;
	delete c;
	return 0;
}