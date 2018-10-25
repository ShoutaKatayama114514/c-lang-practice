#pragma once

#ifndef _CDATA_H_
#define _CDARA_H_

#include <iostream>
#include<string>

using namespace std;

class CData {
private:
	int number;
	string comment;

public:
	void init();
	void setNumber(int inNumber);
	void setComment(string inComment);
	int getNumber();
	string getComment();
};

#endif
