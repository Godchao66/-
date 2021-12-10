#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n=0;
	scanf("%d", &n);
	int fac = 1;
	int i;
	for ( i = 1; i <= n; i++)
	{
		fac = fac * i;
	}
	printf("%d", fac);
	return 0;
}