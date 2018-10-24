#ifndef _FUNDCALC_H_
#define _FUNDCALC_H_
class FundCalc {
private:
	double m_number1;
	double m_number2;
public:
	FundCalc();
	void setNumber1(double number);
	void setNumber2(double number);
	double getNumber1();
	double getNumber2();
	double add();
	double sub();
};

#endif // !_FUNDCALC_H_
