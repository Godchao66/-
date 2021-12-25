#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
    char a1[10], a2[10];
    gets_s(a2);
    for (int i = 0; i < 4; i++) {
        gets_s(a1);
        if (strcmp(a1, a2) > 0) {
            strcpy(a2, a1);
        }
    }
    printf("Max is: %s", a2);
    return 0;
}
