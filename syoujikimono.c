#include<stdio.h>

int main() {
	int x, y;
	scanf("%d %d", &x, &y);
	int re = x > y ? x : y;
	printf("%d\n", re);
	return 0;
}