#include<stdio.h>
#include<string.h>
#include<math.h>

void schek(int *sp);
void dchec(int *dg , char *str );

int main() {
	int deg, dis;
	char str[5] = "";
	scanf("%d %d", &deg, &dis);
	schek(&dis);
	if (dis == 0) printf("C 0\n");
	else {
		dchec(&deg ,str);
		printf("%s %d\n", str, dis);
	}
	return 0;
}

void schek(int *sp) {
	double h = ((double ) *sp / 60);
	h = round(h * 10) / 10;
	if (h >= 0.0 && h <= 0.2) *sp = 0;
	else if (h >= 0.3 && h <= 1.5) *sp = 1;
	else if (h >= 1.6 && h <= 3.3) *sp = 2;
	else if (h >= 3.4 && h <= 5.4) *sp = 3;
	else if (h >= 5.5 && h <= 7.9) *sp = 4;
	else if (h >= 8.0 && h <= 10.7) *sp = 5;
	else if (h >= 10.8 && h <= 13.8) *sp = 6;
	else if(h >= 13.9 && h <= 17.1) *sp = 7;
	else if (h >= 17.2 && h <= 20.7) *sp = 8;
	else if (h >= 20.8 && h <= 24.4) *sp = 9;
	else if (h >= 24.5 && h <= 28.4) *sp = 10;
	else if (h >= 28.5 && h <= 32.6) *sp = 11;
	else if (h >= 32.7) *sp = 12;
}

void dchec(int *dg , char *str) {
	double d = ((double) *dg / 10);
	if (d >= 0.00 && d < 101.25 || d >= 258.75 && d <= 365.00) {//–k”»’è
		if (d >= 11.25 && d < 33.75) strcpy(str, "NNE");
		else if (d >= 33.75 && d < 56.25) strcpy(str, "NE");
		else if (d >= 56.25 && d < 78.75) strcpy(str, "ENE");
		else if (d >= 78.75 && d < 101.25) strcpy(str, "E");
		else if (d >= 258.75 && d < 281.25) strcpy(str, "W");
		else if (d >= 281.25 && d < 303.75) strcpy(str, "WNW");
		else if (d >= 303.75 && d < 326.25) strcpy(str, "NW");
		else if (d >= 326.25 && d < 348.75) strcpy(str, "NNW");
		else strcpy(str, "N");
	}else if (d >= 101.25 && d < 258.75) {
		if (d >= 101.25 && d < 123.75) strcpy(str, "ESE");
		else if (d >= 123.75 && d < 146.25) strcpy(str, "SE");
		else if (d >= 146.25 && d < 168.75) strcpy(str, "SSE");
		else if (d >= 168.75 && d < 191.25) strcpy(str, "S");
		else if (d >= 191.25 && d < 213.75) strcpy(str, "SSW");
		else if (d >= 213.75 && d < 236.25) strcpy(str, "SW");
		else if (d >= 236.25 && d < 258.75) strcpy(str,"WSW");
	}
}
