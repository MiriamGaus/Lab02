#include <stdio.h>

int main () {
    int from;
    int to;
    printf("Count from: ");
    scanf("%d", &from);
    printf("to: ");
    scanf("%d", &to);
    if (from <  to) {
        for (int i = from; i <= to; i++) {
            printf("%d\n", i);
        }
    } else {
        for (int i = from; i >= to; i--) {
            printf("%d\n", i);
        }
    }
    
    return 0;
}