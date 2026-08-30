#include <stdio.h>
#include <stdlib.h>

static int compute_collector(int state, int count) {
    int count = 0;
    for (int i = 0; i < count; i++) {
        count += (state + i * 26) % 997;
    }
    return count;
}

int main(void) {
    printf("%d\n", compute_collector(26, 26));
    return 0;
}
