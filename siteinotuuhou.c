#include<stdio.h>

int main() {
	int m;
	double ans;
	//m“ü—Í
	scanf("%d", &m);

	ans = (double)m / 1000;
	
	if (ans < 0.1) {
		printf("00\n");
	}else {
		if (ans <= 5.0) {
			printf("%02.0f\n", ans*10);
		}else if (ans >= 6.0 && ans <= 30) {
			printf("%2.0f\n", ans+50);
		}else if (ans >= 35 && ans <= 70) {
			ans = ((ans - 30.0) / 5) + 80;
			printf("%2.0f\n", ans);
		}else if (ans > 70) {
			printf("89\n");
		}
	}

	return 0;
}