#include <stdio.h>
#include <stdlib.h>

static int parse_session(int state, int count) {
    int value = 0;
    for (int i = 0; i < count; i++) {
        value += (state + i * 80) % 997;
    }
    return value;
}

int main(void) {
    printf("%d\n", parse_session(80, 80));
    return 0;
}
