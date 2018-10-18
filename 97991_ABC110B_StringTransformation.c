/*
	作成者:97991_片山翔太
	作成日:2018_10_18
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//環境で固定された変数を宣言
#define IN 200000
#define INPUTSIZE IN+2

int main() {
	//変数宣言
	int i, j;
	char Sin[INPUTSIZE], Tin[INPUTSIZE];
	char c;
	
	//入力受付
	fgets(Sin, INPUTSIZE, stdin);
	fgets(Tin, INPUTSIZE, stdin);
	int size = strlen(Sin);

	//fgetsの仕様のために改行コードを終端文字に変換
	if (Sin[size - 1] == '\n'&&Tin[size - 1] == '\n') {
		Sin[size - 1] = '\0';
		Tin[size - 1] = '\0';
	}

	//文字列交換
	for (i = 0; i < size; i++) {
		if (Sin[i] != Tin[i]) {
			c = Sin[i];
			for (j = 0; j < size; j++) {
				if (Sin[j] == c || Sin[j] == Tin[i]) {
					if (j < i) goto MyEndFlag;
					if (Sin[j] == c) Sin[j] = Tin[i];
					else if(Sin[j] == Tin[i]) Sin[j] = c;
					////代入後に判定
					//if (j <= i && Sin[j] != Tin[j])　goto MyEndFlag;
				}
			}
		}
	}
	//プログラムの終了
	MyEndFlag:
	printf(i == size ? "Yes\n":"No\n");
	return 0;
}

//↓↓↓　没自作コード　↓↓↓

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