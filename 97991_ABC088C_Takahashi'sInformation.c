/*

97991_�ЎR�đ� Ver.1.00 2018_10_16
	�쐬
97991_�ЎR�đ� Ver.1.01 2018_10_17
	���r���[�����ƂɏC���B
	TableSize �� TABLESIZE�ɕύX
	goto����ǋL�AEndFanction�^�O��ǉ��B
	����ɔ���for���̒���return 0�������B
	���͎���scanf��fgets�ɕύX�B����ɔ���������.
	��dfor��������
*/
#include<stdio.h>
#include<stdlib.h>
#define TABLESIZE 3 //���܂��Ńe�[�u���̉ω�������
#define INPUTSIZE 3
#define BUFFSIZE INPUTSIZE*(INPUTSIZE+1)+1

int main() {
	//�ϐ��錾�Btbl�Ń}�b�v�t�B�[���h��\��
	int i, j;
	int tbl[TABLESIZE][TABLESIZE];
	char buff[BUFFSIZE];

	//�f�[�^���͎�t
	for (i = 0; i < TABLESIZE; i++) {
		fgets(buff, BUFFSIZE, stdin);
		sscanf(buff, "%d %d %d", &tbl[i][0], &tbl[i][1], &tbl[i][2]);
	}

	//��v�̏�����(a(i)+b(j))-(a(i+1)+b(j))��
	//(a(i)+b(j+1))-(a(i+1)+b(j+1))���r����΋��߂��邩��ȉ��̒ʂ�ɂȂ�
	for (i = 0; i < TABLESIZE - 1; i++) {
		for (j = 0; j < TABLESIZE - 1; j++) {
			//�����𖞂����Ȃ���Ύ��s�Ƃ݂Ȃ��ďI������
			if (tbl[i][j] - tbl[i + 1][j] != tbl[i][j + 1] - tbl[i + 1][j + 1]) {
				printf("No\n");
				goto EndFanction;
			}
		}
	}
	printf("Yes\n");

EndFanction:
	return 0;
}

//�����̃A�h���@�C�X�ɂ���@�𔭌��������߉ߋ��̃R�[�h�͈ȉ��ɕۑ����Ă���

//�������@�����ŏ����Ă��v�R�[�h�@������

//#define MaxN 100
//void ZeroSerch(int **tblData, int *aTbl, int *bTbl);
//void NZeroSerch(int **tblData, int *aTbl, int *bTbl);
//void NNSerch(int **tblData, int *aTbl, int *bTbl);
//
//int main() {
//	int i, j, k;
//	int a[TABLESIZE], b[TABLESIZE];
//	int tbl[TABLESIZE][TABLESIZE];
//	int *tbl2[TABLESIZE];
//	for (i = 0; i < TABLESIZE; i++) {
//			scanf("%d %d %d", &tbl[i][0],&tbl[i][1],&tbl[i][2]);
//			tbl2[i] = tbl[i];
//	}
//	
//	ZeroSerch(tbl2,a,b);
//
//	for (i = 0; i < TABLESIZE; i++) {
//		for (j = 0; j < TABLESIZE; j++) {
//			if (a[i] != 0 && b[j] != 0) {
//				
//			}
//		}
//	}
//
//	return 0;
//	
//}
//
//void ZeroSerch(int **tblData, int *aTbl, int *bTbl) {
//	int i, j;
//	for (i = 0; i < TABLESIZE; i++) {
//		for (j = 0; j < TABLESIZE; j++) {
//			if (tblData[i][j] == 0) {
//				aTbl[i] = 0;
//				bTbl[j] = 0;
//			}
//		}
//	}
//	i = 0;
//}


