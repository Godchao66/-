#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
extern int Number(int n);
int main()
{
	int n;
	scanf("%d", &n);
	int num = Number(n);
	printf("%d", num);
	return 0;

}
int number(int n)
{
	int count=0;
	while (n)
	{
		n = n & (n - 1);
		count++;

	}
	return count;
	
}
//int Number(  int n)
//{
//	int i;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//		
//	}
//	return count;
//
//}
