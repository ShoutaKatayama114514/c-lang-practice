#include<stdio.h>
#define TableSize 3 //���܂��Ńe�[�u���̉ω�������

int main() {
	//�ϐ��錾�Btbl�Ń}�b�v�t�B�[���h��\��
	int i, j;
	int tbl[TableSize][TableSize];

	//�f�[�^���͎�t
	for (i = 0; i < TableSize; i++) {
		for (j = 0; j < TableSize; j++) {
			scanf("%d", &tbl[i][j]);
		}
	}

	//��v�̏�����(a(i)+b(j))-(a(i+1)+b(j))��
	//(a(i)+b(j+1))-(a(i+1)+b(j+1))���r����΋��߂��邩��ȉ��̒ʂ�ɂȂ�
	for (i = 0; i < TableSize - 1; i++) {
		for (j = 0; j < TableSize - 1; j++) {
			//�����𖞂����Ȃ���Ύ��s�Ƃ݂Ȃ��ďI������
			if (tbl[i][j] - tbl[i + 1][j] != tbl[i][j + 1] - tbl[i + 1][j + 1]) {
				printf("No\n");
				return 0;
			}
		}
	}

	printf("Yes\n");
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
//	int a[TableSize], b[TableSize];
//	int tbl[TableSize][TableSize];
//	int *tbl2[TableSize];
//	for (i = 0; i < TableSize; i++) {
//			scanf("%d %d %d", &tbl[i][0],&tbl[i][1],&tbl[i][2]);
//			tbl2[i] = tbl[i];
//	}
//	
//	ZeroSerch(tbl2,a,b);
//
//	for (i = 0; i < TableSize; i++) {
//		for (j = 0; j < TableSize; j++) {
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
//	for (i = 0; i < TableSize; i++) {
//		for (j = 0; j < TableSize; j++) {
//			if (tblData[i][j] == 0) {
//				aTbl[i] = 0;
//				bTbl[j] = 0;
//			}
//		}
//	}
//	i = 0;
//}


