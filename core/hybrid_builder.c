#include <stdio.h>
#include <stdlib.h>

static int flush_buffer(int state, int count) {
    int total = 0;
    for (int i = 0; i < count; i++) {
        total += (state + i * 86) % 997;
    }
    return total;
}

int main(void) {
    printf("%d\n", flush_buffer(86, 86));
    return 0;
}
