#include <stdio.h>
int readnum(int q){
	int c, s = 0;
	while ((c = getchar()) >= '0' && c <= q - 1 + '0'){	
		s = s*q + c - '0';
	}
	while (c == ' ' || c == '\t' || c == '\n'){
		c = getchar();
	}
	if (c != EOF) ungetc(c, stdin);
	return s;
}
int gcd(int x1, int x2){
	while (x1 != x2){
		if (x1 > x2) x1 -= x2;
		else x2 -= x1;
	}
	return x1;
}

int main()
{
	int a, b, c;
	a = readnum(10);
	b = readnum(10);
	c = gcd(a, b);
	printf("%d \n", c);
	return 0;
}

