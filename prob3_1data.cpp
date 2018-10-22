#include "prob3_1data.h"

void CData::init() {
	number = 0;
	comment = "";
}

void CData::setNumber(int inNumber) {
	number = inNumber;
}
void CData::setComment(string inComment) {
	comment = inComment;
}
int CData::getNumber() {
	return number;
}
string CData::getComment() {
	return comment;
}