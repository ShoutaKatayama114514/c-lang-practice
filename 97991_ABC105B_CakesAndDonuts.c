#include<stdio.h>
#include<stdlib.h>

int main() {
	//�ϐ��錾
	//�ڕW�����Ƃ��ė^����ꂽN�𗬗p
	int i, j;
	int N;

	scanf("%d", &N);//���͎�t
	//��s�r��
	if (N < 4) {
		printf("No\n");
		return 0;
	}
	for (i = 0;i < 26; i++) {
		for (j = 0; j < 15; j++) {
			//��v����Ȃ�I��
			if (4 * i + 7 * j == N) {
				printf("Yes\n");
				return 0;
			}
		}
	}
	//��v���Ȃ����ߏI��
	printf("No\n");
	return 0;
}