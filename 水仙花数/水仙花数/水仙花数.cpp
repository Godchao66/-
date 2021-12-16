#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int narcissistic(int number);
void PrintN(int m, int n);

int main()
{
	int m, n;

	scanf("%d %d", &m, &n);
	if (narcissistic(m)) printf("%d is a narcissistic number\n", m);
	PrintN(m, n);
	if (narcissistic(n)) printf("%d is a narcissistic number\n", n);

	return 0;
}

/* 你的代码将被嵌在这里 */
int narcissistic(int number)
{
	int sum = 0;
	int a, k;
	a = number;

	k = (int)log10(a) + 1;
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < k; i++)
	{
		arr[i] = (int)(a / (int)pow(10, k - i - 1)) % 10;

		if (arr[i] != 0)
			sum = sum + pow(arr[i], 3);
	}
	if (sum == a)
	{
		return 1;
	}
	else
		return 0;



}

void PrintN(int m, int n)
{

	int a = 0;
	if (m > n)
	{
		a = m;
		m = n;
		n = a;
	}
	int i = 0;
	for (i = m + 1; i < n; i++)
	{
		if (narcissistic(i))
		{
			printf("%d\n", i);
		}
	}
}