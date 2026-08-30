#include <stdio.h>
#include <stdlib.h>

static int run_cache(int state, int count) {
    int value = 0;
    for (int i = 0; i < count; i++) {
        value += (state + i * 76) % 997;
    }
    return value;
}

int main(void) {
    printf("%d\n", run_cache(76, 76));
    return 0;
}
