#include <stdio.h>
#include <string.h> // Unit for working with string values

int mystrlen(const char a[])
{
	int k = 0;
	while (*a++) ++k;
	return k;
}
void mystrcpy(char *s, const char* t)
{
	while (*t) *s++ = *t++;
	*s = '\0';
}

void mycoolstrcpy(char *s, const char* t)
{
	while (*s++ = *t++);
}

char* mystrchr(char *s, char ch)
{
	while (*s && *s != ch) s++;
	return *s ? s : NULL;
}

int main()
{
	char str1[100] = "cat", str2[100] = "dog";
	// str1 = str 2; -> Error
	strcpy(str1, str2); // That's correct copying
}
