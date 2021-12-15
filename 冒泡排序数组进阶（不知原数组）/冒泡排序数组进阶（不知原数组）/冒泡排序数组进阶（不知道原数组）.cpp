#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void bubble_sort(int arr[], int sz)
{
	int i, j;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
	}
}
int main()
{
	int arr[10] = { 0 };
	int m=0;
	int link=0;
	while (1)
	{
		scanf("%d", &link);
		arr[m] = link;
		if ( getchar()=='\n')
		{
			break;
		}
		m++;
	}




	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);

	}
	return 0;
}
