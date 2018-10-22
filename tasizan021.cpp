#include<stdio.h>
#include<math.h>

int main() {
	int i = 0, ans , s;
	int a[5];
	scanf("%d", &s);
	if (s % 2 == 1) {
		s--;
		a[0] = 1;
		i = 1;
	}

	for (i; s != 0; i++) {
		s -= 2;
		a[i] = 2;
	}
	printf("%d\n", i);
	for (s; s < i; s++) {
		printf("%d\n", a[s]);
	}
	return 0;
}