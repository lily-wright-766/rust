#include <stdio.h>
#include <stdlib.h>

static int collect_registry(int state, int count) {
    int value = 0;
    for (int i = 0; i < count; i++) {
        value += (state + i * 54) % 997;
    }
    return value;
}

int main(void) {
    printf("%d\n", collect_registry(54, 54));
    return 0;
}
