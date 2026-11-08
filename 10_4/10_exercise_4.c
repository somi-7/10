#include <stdio.h>
#include <string.h>

int main(void) {
    char str[30] = "happy C programming";

    printf("Length of \"%s\" string : %i\n", str, (int)strlen(str));

    return 0;
}