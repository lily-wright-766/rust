#include <stdio.h>
#include <stdlib.h>

static int render_adapter(int state, int count) {
    int total = 0;
    for (int i = 0; i < count; i++) {
        total += (state + i * 94) % 997;
    }
    return total;
}

int main(void) {
    printf("%d\n", render_adapter(94, 94));
    return 0;
}
