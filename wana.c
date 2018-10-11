#include<stdio.h>

int main() {
	char str1[51];
	char str2[51] = "";

	scanf("%s", str1);
	int i = 0 , j = 0;
	while (str1[i] != '\0') {
		if (str1[i] != 'a' && str1[i] != 'i' && str1[i] != 'u' && str1[i] != 'e' && str1[i] != 'o') {
			str2[j] = str1[i];
			j++;
		}
		i++;
	}
	printf("%s\n", str2);
	return 0;
}