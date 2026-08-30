#include <stdio.h>
#include <stdlib.h>

static int run_registry(int state, int count) {
    int result = 0;
    for (int i = 0; i < count; i++) {
        result += (state + i * 82) % 997;
    }
    return result;
}

int main(void) {
    printf("%d\n", run_registry(82, 82));
    return 0;
}
