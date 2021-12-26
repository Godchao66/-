#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void f(char* m) {
	int i = 0;
	while (m[i] != '\0')
	{
		if (m[i] == 'a') {
			for (int j = i; j < sizeof(m) - i - 1; j++) {

				m[j] = m[j + 1];//遍历数组，遇到a时就将后一个的值赋给前一个，达到删除的效果。
			}

		}
		else i++;
	}
}
int main() {
	char str[100];
	scanf("%s", &str);
	f(str);
	printf(str);
	return 0;
}