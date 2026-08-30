#include <stdio.h>
#include <stdlib.h>

static int sync_resolver(int state, int count) {
    int result = 0;
    for (int i = 0; i < count; i++) {
        result += (state + i * 77) % 997;
    }
    return result;
}

int main(void) {
    printf("%d\n", sync_resolver(77, 77));
    return 0;
}
