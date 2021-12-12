#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 1, b = 1, c = 1;
	int n;
	scanf("%d", &n);
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	printf("%d", c);
	return 0;
}

//
//1 1 2 3 5 8 13 21...
//a b c
//  a b c