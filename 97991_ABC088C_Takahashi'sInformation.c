/*

97991_片山翔太 Ver.1.00 2018_10_16
	作成
97991_片山翔太 Ver.1.01 2018_10_17
	レビューをもとに修正。
	TableSize を TABLESIZEに変更
	goto文を追記、EndFanctionタグを追加。
	それに伴いfor文の中のreturn 0を消去。
	入力時のscanfをfgetsに変更。それに伴い見直し.
	二重for文を解消
*/
#include<stdio.h>
#include<stdlib.h>
#define TABLESIZE 3 //おまけでテーブルの可変化を実装
#define INPUTSIZE 3
#define BUFFSIZE INPUTSIZE*(INPUTSIZE+1)+1

int main() {
	//変数宣言。tblでマップフィールドを表現
	int i, j;
	int tbl[TABLESIZE][TABLESIZE];
	char buff[BUFFSIZE];

	//データ入力受付
	for (i = 0; i < TABLESIZE; i++) {
		fgets(buff, BUFFSIZE, stdin);
		sscanf(buff, "%d %d %d", &tbl[i][0], &tbl[i][1], &tbl[i][2]);
	}

	//一致の条件は(a(i)+b(j))-(a(i+1)+b(j))と
	//(a(i)+b(j+1))-(a(i+1)+b(j+1))を比較すれば求められるから以下の通りになる
	for (i = 0; i < TABLESIZE - 1; i++) {
		for (j = 0; j < TABLESIZE - 1; j++) {
			//条件を満たせなければ失敗とみなして終了する
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

//奥村のアドヴァイスにより解法を発見したため過去のコードは以下に保存しておく

//↓↓↓　自分で書いてた没コード　↓↓↓

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


