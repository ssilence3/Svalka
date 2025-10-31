#include <stdio.h>
#include <string.h> // Unit for strings

int main()
{
	// 1) That's a string
	char str[100]="cat"; // equals char str[100]={'c', 'a', 't', 0 || '\0'}
	str[3] = 's';
	str[4] = '\0'; // from now on str equals "cats"

	// 2) Printing string value
	printf("%s\n", str);

	// 3) Reading string value
	scanf("%s", str);

	// 4) Comparing string values
	char s[100] = "cat", t[100] = "cat";
	strcmp(s, t) // returns 0 because 'c' - 'c' = 'a' - 'a' = 't' - 't' = 0
	
	// 5) How do we point the pointer at the end of string
	char *p;
	p = str + strlen(str) - 1;

	do
	{
		...
	}
	while (p != str);
	return 0;
}

