#include "prob7_2vector.h"

//  �R���X�g���N�^
Vector::Vector() : m_x(0), m_y(0)
{
}
//  �����̐ݒ�
void Vector::set(double x, double y)
{
	m_x = x;
	m_y = y;
}
//  x�����̎擾
double Vector::getX()
{
	return m_x;
}
//  y�����̎擾
double Vector::getY()
{
	return m_y;
}

Vector::Vector(double x ,double y) : m_x(x), m_y(y){
	
}