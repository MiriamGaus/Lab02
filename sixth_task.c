#include <stdio.h>

int main() {
    int length;
    printf("Length of the line: \n");
    scanf("%d",&length);
    printf("+");
    for (int i = 0 ; i < length; i++) {
        printf("-");
    }
    printf("+\n");
    return 0;
}