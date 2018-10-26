#include "probex3_2collection.h"
#include <iostream>

using namespace std;

//  コンストラクタ
Collection<int>::Collection(int *array, int length)
{
	m_pArray = new int[length];
	m_length = length;
	for (int i = 0; i < m_length; i++) {
		m_pArray[i] = array[i];
	}
}
//  デストラクタ
Collection<int>::~Collection()
{
	delete[] m_pArray;
}
int Collection<int>::getMax()
{
	int max = m_pArray[0];
	for (int i = 0; i < m_length; i++) {
		if (max < m_pArray[i]) {
			max = m_pArray[i];
		}
	}
	return max;
}
int Collection<int>::getMin()
{
	int min = m_pArray[0];
	for (int i = 0; i < m_length; i++) {
		if (min > m_pArray[i]) {
			min = m_pArray[i];
		}
	}
	return min;
}
void Collection<int>::showArray() {
	for (int i = 0; i < m_length; i++) {
		cout << m_pArray[i] << " ";
	}
	cout << endl;
}