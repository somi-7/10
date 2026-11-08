#include <stdio.h>

int main(void) {
    char code1 = 'A';   /* 문자 상수 'A' -> 내부적으로 ASCII 코드 65 저장 */
    int  code2 = 65;    /* 정수 65 -> %c로 출력하면 ASCII 65번 문자 'A' */

    printf("code1 = %c, (%d)\n", code1, code1);
    printf("code2 = %c, (%d)\n", code2, code2);

    return 0;
}