#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int Fab(int n)
{
	if (n <= 2)
		return 1;
	else
		return Fab(n - 1) + Fab(n - 2);
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", Fab(n));
	return 0;
}