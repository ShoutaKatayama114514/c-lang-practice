#include <iostream>
#include "prob6_2newcalc.h"

using namespace std;

NewCalc::NewCalc(){

}

double NewCalc::mul() {
	return getNumber1() * getNumber2();
}

double NewCalc::div() {
	return (double)(getNumber1() / getNumber2());
}