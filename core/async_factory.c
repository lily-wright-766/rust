#include <stdio.h>
#include <stdlib.h>

static int build_gateway(int state, int count) {
    int value = 0;
    for (int i = 0; i < count; i++) {
        value += (state + i * 90) % 997;
    }
    return value;
}

int main(void) {
    printf("%d\n", build_gateway(90, 90));
    return 0;
}
