#include <stdint.h>
#include <stdio.h>

int32_t count_substrings(const char* value, const char* substr);

int main() {
    printf("%d\n", count_substrings("bąnana", "na"));
    return 0;
}
