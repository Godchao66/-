#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void f(char* m) {
	int i = 0;
	while (m[i] != '\0')
	{
		if (m[i] == 'a') {
			for (int j = i; j < sizeof(m) - i - 1; j++) {

				m[j] = m[j + 1];//�������飬����aʱ�ͽ���һ����ֵ����ǰһ�����ﵽɾ����Ч����
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