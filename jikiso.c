#include<stdio.h>
#include<math.h>

int main() {

	int xa, xb, xc, ya, yb, yc;
	double cal;
	scanf("%d %d %d %d %d %d", &xa, &ya, &xb, &yb, &xc, &yc);
	cal = ((xa*yb) + (xb*yc) + (xc*ya) - (ya*xb) - (yb*xc) - (yc*xa)) / 2.0;
	double ans = cal > 0.0 ? cal : -1.0 * cal;
	printf("%0.1lf\n", ans);
	return 0;
}