#include<stdio.h>
#include<stdlib.h>

int main() {
	//変数宣言
	//目標条件として与えられたNを流用
	int i, j;
	int N;

	scanf("%d", &N);//入力受付
	//先行排除
	if (N < 4) {
		printf("No\n");
		return 0;
	}
	for (i = 0;i < 26; i++) {
		for (j = 0; j < 15; j++) {
			//一致するなら終了
			if (4 * i + 7 * j == N) {
				printf("Yes\n");
				return 0;
			}
		}
	}
	//一致しないため終了
	printf("No\n");
	return 0;
}