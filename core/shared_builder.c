#include <stdio.h>
#include <stdlib.h>

static int run_service(int state, int count) {
    int value = 0;
    for (int i = 0; i < count; i++) {
        value += (state + i * 95) % 997;
    }
    return value;
}

int main(void) {
    printf("%d\n", run_service(95, 95));
    return 0;
}
