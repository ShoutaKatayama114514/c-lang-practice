#include "prob7_1counter.h"

//  �R���X�g���N�^
Counter::Counter() : m_count(0)
{

}
//  �J�E���^�����Z�b�g
void Counter::reset()
{
	m_count = 0;
}
//  �񐔂��擾
int Counter::getCount()
{
	return m_count;
}
//  1���J�E���g
void Counter::count()
{
	m_count++;
}

//�ǋL����
void Counter::count(int a)
{
	m_count += a;
}