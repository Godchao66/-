#define  _CRT_SECURE_NO_WARNINGS
//���100��200������
#include<stdio.h>
#include <math.h>
int main()
{
	int i;
	int j;
	//i��2��i-1ȡ��
	//��ʱ���ÿ���i�Ƿ����j����Ϊ�ڲ�forѭ��ֻ��i����i-1��֮������j++������i=j��
	for (i = 100; i <= 200; i++)//��������һ��Ϊ�������ɸ�Ϊ��i=101��i<=100;i+=2)
	{
		for (j = 2; j <i; j++)//����m=a*bʱ��a��b����С�ڵ��ڸ�����m�����ѭ���ж������пɰ�"j<i"����"j<=sqrt(i)",����֮��if��i==j��Ҫ�޸�
		{
			if (i % j == 0)
				break;
		}
		if (i == j)
			printf("%d ", i);
	}
	return 0;
}
