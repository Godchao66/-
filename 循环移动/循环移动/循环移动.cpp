#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void mov(int* x, int n, int m) {
	int i, a[1000];
	for (i = 0; i < n; i++) {
		int t = m + i;
		if (t > n - 1) {
			t -= n;
		}
		a[t] = x[i];
	}
	for (i = 0; i < n; i++) {
		printf(" %d", a[i]);
	}
}
int main()
{
	int n, m, i, a[1000];
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	printf("After move:");
	mov(a, n, m);
	return 0;
}