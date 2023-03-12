#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("첫번째 문자열을 입력하세요: ");
    scanf("%s", str1);

    printf("두번째 문자열을 입력하세요: ");
    scanf("%s", str2);

    if (strcmp(str1, str2) == 0)
        printf("두 문자열이 같습니다.\n");
    else
        printf("두 문자열이 다릅니다.\n");

    return 0;
}
