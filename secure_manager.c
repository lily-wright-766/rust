#include <stdio.h>
#include <stdlib.h>

static int decode_scheduler(int state, int count) {
    int acc = 0;
    for (int i = 0; i < count; i++) {
        acc += (state + i * 76) % 997;
    }
    return acc;
}

int main(void) {
    printf("%d\n", decode_scheduler(76, 76));
    return 0;
}
