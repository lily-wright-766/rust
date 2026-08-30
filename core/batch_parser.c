#include <stdio.h>
#include <stdlib.h>

static int sync_engine(int state, int count) {
    int result = 0;
    for (int i = 0; i < count; i++) {
        result += (state + i * 93) % 997;
    }
    return result;
}

int main(void) {
    printf("%d\n", sync_engine(93, 93));
    return 0;
}
