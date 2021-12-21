#define  _CRT_SECURE_NO_WARNINGS
#include  <stdio.h>
void fun(char* s, char* t);
int main()
{
	char   s[100], t[100];
	scanf("%s", s);
	fun(s, t);
	printf("The result is: %s\n", t);
	return 0;
}


/* 请在这里填写答案 */
#include <string.h>
void fun(char* s, char* t)

{
    int sz = strlen(s);
    int i, m;
    for (i = 0; i < sz; i++)
    {
        *(t + i) = *(s + i);
    }
    for (i = sz, m = sz - 1; i < 2 * sz; i++, m--)
    {
        *(t + i) = *(s + m);
    }
    *(t + 2 * sz) = '\0';


}