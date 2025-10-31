#include <stdio.h>
#include <ctype.h>

int main()
{
	printf("%d \n", F());
	return 0;
}

int M()
{
	int x = getchar(), a;
	if (isdigit(x)) return x - '0';
	a = F();
	getchar();
	return a;
}

int T()
{
	int x, a;
	x = M();
	while ((a = getchar()) == '*' || a == '/')
	{
		if (a == '*') x *= M();
		else x /= M();
	}
	ungetc(a, stdin);
	return x;
}

int F()
{
	int x, a;
	x = T();
	while ((a = getchar()) == '+' || a == '-')
	{
		if (a == '+') x += T();
		else x -= T();
	}
	ungetc(a, stdin);
	return x;
}


