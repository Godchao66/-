#define  _CRT_SECURE_NO_WARNINGS
//输出100到200的素数
#include<stdio.h>
#include <math.h>
int main()
{
	int i;
	int j;
	//i除2至i-1取余
	//此时不用考虑i是否等于j，因为内层for循环只让i除到i-1；之后由于j++，才是i=j；
	for (i = 100; i <= 200; i++)//由于素数一定为奇数，可改为（i=101；i<=100;i+=2)
	{
		for (j = 2; j <i; j++)//由于m=a*b时，a与b均会小于等于根号下m，因此循环判断条件中可把"j<i"换成"j<=sqrt(i)",但是之后if（i==j）要修改
		{
			if (i % j == 0)
				break;
		}
		if (i == j)
			printf("%d ", i);
	}
	return 0;
}
