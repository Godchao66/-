#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int Fac( int n)
{
	if (n <= 1)
		return 1;
	else if (n > 1)
		return n * Fac(n - 1);
}
int main()
{
	 int n ;
	scanf("%d", &n);
	/*int ret = 0;
	ret = Fac(n);*/
	
	printf("%d\n", Fac(n));
	return 0;
}
