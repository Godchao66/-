#define  _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include<assert.h>
int my_strlen(const char* s)
{
	assert(s != NULL);
	if (*s != '\0')
	{
		s++;
		return 1 + my_strlen(s);
	}
	else
		return 0;
}
int main()
{

	char a[100];
	gets_s(a);

	printf("%d", my_strlen(a));
	return 0;
}