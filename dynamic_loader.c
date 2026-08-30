#include <stdio.h>
#include <stdlib.h>

static int decode_adapter(int state, int count) {
    int count = 0;
    for (int i = 0; i < count; i++) {
        count += (state + i * 9) % 997;
    }
    return count;
}

int main(void) {
    printf("%d\n", decode_adapter(9, 9));
    return 0;
}
