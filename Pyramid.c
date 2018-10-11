#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<math.h>

int main() {//カンニング済み

	int N,flag;
	int x[101], y[101], h[101];
	int H = 0;
	scanf("%d", &N);
	int i, j, k , c;
	for (i = 0; i < N; i++) {
		scanf("%d %d %d", &x[i], &y[i] , &h[i]);
	}
	for (i = 0; i < 101; i++) {
		for (j = 0; j < 101; j++) {
			flag = 0;
			for (k = 0; k < N; k++) {
				if (h[k] != 0) {
					if (flag == 0) {
						H = h[k] + abs(x[k] - i) + abs(y[k] - j);
						flag = 1;
					}else {
						if (H != h[k] + abs(x[k] - i) + abs(y[k] - j)) {
							flag = 2;
							break;
						}
					}
				}
			}
			for (k = 0; k < N; k++) {
				if (h[k] == 0) {
					if (h[k] < H - abs(x[k] - i) - abs(y[k] - j)) {
						flag = 2;
					}
				}
			}
			if (flag == 1) {
				printf("%d %d %d\n", i, j, H);
				return 0;
			}
		}
	}
	return 0;
}

//hi = max( H - |X - Cx| - |Y - Cy|, 0 )
//の式で表せる
//hi=5、2,3のとき
//H = 5 + |2 - Cx| + |3 - Cy|

//答え
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <math.h>
//int main(void) {
//	int n, m;
//	int min;
//	int i, j, k;
//	int ans_h, tmp_h;
//	int xxx = 0, flag = 0;
//	int x[100], y[100], h[100];
//	scanf("%d", &n);
//	for (i = 0; i < n; i++) {
//		scanf("%d %d %d", &x[i], &y[i], &h[i]);
//	}
//	for (i = 0; i < 101; i++) {
//		for (j = 0; j < 101; j++) {
//			flag = 0;
//			for (k = 0; k < n; k++) {
//				if (h[k] != 0) {
//					if (flag == 0) {
//						tmp_h = h[k] + abs(x[k] - i) + abs(y[k] - j);
//						flag = 1;
//					}
//					else {
//						if (tmp_h != h[k] + abs(x[k] - i) + abs(y[k] - j)) {
//							flag = 2;
//							break;
//						}
//					}
//				}
//			}
//			for (k = 0; k < n; k++) {
//				if (h[k] == 0) {
//					if (h[k] < tmp_h - abs(x[k] - i) - abs(y[k] - j)) {
//						flag = 2;
//					}
//				}
//			}
//			if (flag == 1) {
//				printf("%d %d %d\n", i, j, tmp_h);
//				return 0;
//			}
//		}
//	}
//	return 0;
//}

