/*
	�쐬��:97991_�ЎR�đ�
	�쐬��:2018_10_18
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//���ŌŒ肳�ꂽ�ϐ���錾
#define IN 200000
#define INPUTSIZE IN+2

int main() {
	//�ϐ��錾
	int i, j;
	char Sin[INPUTSIZE], Tin[INPUTSIZE];
	char c;
	
	//���͎�t
	fgets(Sin, INPUTSIZE, stdin);
	fgets(Tin, INPUTSIZE, stdin);
	int size = strlen(Sin);

	//fgets�̎d�l�̂��߂ɉ��s�R�[�h���I�[�����ɕϊ�
	if (Sin[size - 1] == '\n'&&Tin[size - 1] == '\n') {
		Sin[size - 1] = '\0';
		Tin[size - 1] = '\0';
	}

	//���������
	for (i = 0; i < size; i++) {
		if (Sin[i] != Tin[i]) {
			c = Sin[i];
			for (j = 0; j < size; j++) {
				if (Sin[j] == c || Sin[j] == Tin[i]) {
					if (j < i) goto MyEndFlag;
					if (Sin[j] == c) Sin[j] = Tin[i];
					else if(Sin[j] == Tin[i]) Sin[j] = c;
					////�����ɔ���
					//if (j <= i && Sin[j] != Tin[j])�@goto MyEndFlag;
				}
			}
		}
	}
	//�v���O�����̏I��
	MyEndFlag:
	printf(i == size ? "Yes\n":"No\n");
	return 0;
}

//�������@�v����R�[�h�@������

//for (i = 0; i < size; i++) {
//	if (Sin[i] != Tin[i]) {
//		for (j = i + 1, flag = 1; j < size; j++) {
//			if (Tin[i] == Tin[j] && Sin[i] != Sin[j]) {
//				printf("No\n");
//				return 0;
//			}
//			else if (Tin[i] == Tin[j] && Sin[i] == Sin[j]) {
//				strcpy(Tin + j, Sin + j);
//				flag++;
//			}
//		}
//		if (flag > 1) {
//			strcpy(Tin + i, Sin + i);
//			flag = 0;
//		}
//	}
//}