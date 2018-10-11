#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main() {
	int H, W, T;
	int i, j, k, m;
	int Sx, Sy, Gx, Gy;
	int lengx, lengy;
	char **meiro;
	scanf("%d %d %d", &H, &W, &T);
	meiro = malloc(sizeof(int *) * H);
	for (i = 0; i < H; i++) {
		meiro[i] = malloc(sizeof(int *) * W);
	}

	for (i = 0; i < H; i++) {
		scanf("%s", meiro[i]);
		for (j = 0; j < W; j++) {
			if (meiro[i][j] == 'S') {
				Sx = j;
				Sy = i;
				break;
			}
			else if (meiro[i][j] == 'G') {
				Gx = j + 1;
				Gy = i + 1;
				break;
			}
			
		}
	}

	lengx = abs(Sx - Gx);
	lengy = abs(Sy - Gy);
	
	int count1 = 0 , count2 = 0;
	for (i = Sy , j = Sx; i < lengy; i++) {
		for (j = Sx; j < lengx; j++) {
			if (meiro[i][j] == '.' || meiro[i][j] == 'G') count1++;
			else if (meiro[i][j] == '#') count2++;
		}

	}
	for (i = 0, k = 0 , m = T; i < lengx*lengy; i++) {
		j = count1 + m * count2;
		if (k < j && j < T)  k = j;
		else if (T - j < 0) {
			m--;
			i = -1;
			k = 0;
		}
	}

	printf("%d\n", k);

	return 0;

}

/*
		k = T;
		m = k;
		j = Sy;
		
		if (meiro[i][j] == '.' || meiro[i][j] == 'G') k--;
		else if (meiro[i][j] == '#') k -= m;

		if (k < 0) {
			k = T;
			m--;
			i = Sx;
		}
		
		if (meiro[i][j+1] == '.' || meiro[i][j+1] == 'G') k--;
		else if (meiro[i][j+1] == '#') k -= m;

		if (k < 0) {
			k = T;
			m--;
			i--;
			j = Sy;
			break;
		}

*/