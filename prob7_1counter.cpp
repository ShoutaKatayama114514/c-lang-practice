#include "prob7_1counter.h"

//  コンストラクタ
Counter::Counter() : m_count(0)
{

}
//  カウンタをリセット
void Counter::reset()
{
	m_count = 0;
}
//  回数を取得
int Counter::getCount()
{
	return m_count;
}
//  1ずつカウント
void Counter::count()
{
	m_count++;
}

//追記部分
void Counter::count(int a)
{
	m_count += a;
}