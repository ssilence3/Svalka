#include <stdio.h>
void swap(char &x, char &y)
{
	char t;
	t = *x;
	*x = *y;
	*y = t;
}

int main()
{
	char a, b;
	scanf("%c%c", &a, &b);
	swap(a, b);
	printf("a=%c,b=%c\n",a,b);
}
