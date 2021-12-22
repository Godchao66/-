#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void strcopy(char* str1, char* str2, int m);
int main()
{
	int i, m;
	char* p1, * p2, str1[80], str2[80];
	p1 = str1; p2 = str2;
	gets_s(str1,79);
	scanf("%d", &m);
	strcopy(str1, str2, m);
	puts_s(p1); puts(p2);
	return 0;
}

/* 请在这里填写答案 */
void strcopy(char* str1, char* str2, int m)
{
	int i = 0;
	while (*(str1 + m + i - 1) != '\0')
	{
		*(str2 + i) = *(str1 + m + i - 1);
		i++;
	}

}