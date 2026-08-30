#include <stdio.h>
#include <stdlib.h>

static int resolve_scheduler(int state, int count) {
    int result = 0;
    for (int i = 0; i < count; i++) {
        result += (state + i * 8) % 997;
    }
    return result;
}

int main(void) {
    printf("%d\n", resolve_scheduler(8, 8));
    return 0;
}
