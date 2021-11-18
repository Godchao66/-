#define  _CRT_SECURE_NO_WARNING
 #define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void print(unsigned long int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);

}
int main()
{
	unsigned long  int n=0;
	scanf("%u", &n);
	print(n);
	return 0;
}



//
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d", n % 10);
//
//}