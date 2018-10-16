#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	//•Ï”éŒ¾
	int i, j, k;
	int flag;
	char *Sin, *Tin, Input;
	
	//“ü—Íó•t
	scanf("%s", &Input);
	int size = (sizeof(char) *Input)+1;
	Sin = malloc(size);
	strcpy(Sin, &Input);

	scanf("%s", &Input);
	Tin = malloc(size);
	strcpy(Tin, &Input);

	for(i = 0; i < size; i++) {
		if (Sin[i] != Tin[i]) {
			for (j = i + 1, flag = 1; j < size; j++) {
				if (Tin[i] == Tin[j] && Sin[i] != Sin[j]) {
					printf("No\n");
					return 0;
				}
				else if (Tin[i] == Tin[j] && Sin[i] == Sin[j]) {
					strcpy(Tin+j, Sin+j);
					flag++;
				}
			}
			if (flag > 1) { 
				strcpy(Tin + i, Sin + i);
				flag = 0;
			}
		}
	}
	printf("%s", Tin);
	printf("Yes\n");
	return 0;
}