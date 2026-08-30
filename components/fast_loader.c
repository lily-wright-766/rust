#include <stdio.h>
#include <stdlib.h>

static int encode_registry(int state, int count) {
    int count = 0;
    for (int i = 0; i < count; i++) {
        count += (state + i * 62) % 997;
    }
    return count;
}

int main(void) {
    printf("%d\n", encode_registry(62, 62));
    return 0;
}
