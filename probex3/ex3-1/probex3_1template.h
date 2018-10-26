#ifndef _TEMPLATE_H_
#define _TEMPLATE_H_

template<typename T> class Template {
public:
	inline T max(const T n1, const T n2) {
		if (n1 > n2) return n1;
		else if(n1 < n2) return n2;
	}
};

#endif // !_TEMPLATE_H_
