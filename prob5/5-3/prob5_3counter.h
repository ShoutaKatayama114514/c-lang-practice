#ifndef _COUNTER_H_
#define _COUNTER_H_

class Counter {
private:
	//‰ñ”
	int m_count;
public:
	Counter();
	static int m_totalCount;
	void reset();
	void count();
	int getCount();
	static int getTotalCount();
};

#endif // !_COUNTER_H_
