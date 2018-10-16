#include<stdio.h>
#define TableSize 3 //おまけでテーブルの可変化を実装

int main() {
	//変数宣言。tblでマップフィールドを表現
	int i, j;
	int tbl[TableSize][TableSize];

	//データ入力受付
	for (i = 0; i < TableSize; i++) {
		for (j = 0; j < TableSize; j++) {
			scanf("%d", &tbl[i][j]);
		}
	}

	//一致の条件は(a(i)+b(j))-(a(i+1)+b(j))と
	//(a(i)+b(j+1))-(a(i+1)+b(j+1))を比較すれば求められるから以下の通りになる
	for (i = 0; i < TableSize - 1; i++) {
		for (j = 0; j < TableSize - 1; j++) {
			//条件を満たせなければ失敗とみなして終了する
			if (tbl[i][j] - tbl[i + 1][j] != tbl[i][j + 1] - tbl[i + 1][j + 1]) {
				printf("No\n");
				return 0;
			}
		}
	}

	printf("Yes\n");
	return 0;
}

//奥村のアドヴァイスにより解法を発見したため過去のコードは以下に保存しておく

//↓↓↓　自分で書いてた没コード　↓↓↓

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


