#include "powersum.h"

#define MAX_INT 2147483647  // maximum value of 32-bit signed int

int power_overflow(int b, int n) {
    int result = 1;
    for (int i = 0; i < n; i++) {
        if (b != 0 && result > MAX_INT / b) {
            return 1; // would overflow
        }
        result *= b;
    }
    return 0; // no overflow
}

int mypower(int b, int n) {
    if (power_overflow(b, n)) {
        return 0;
    }

    int result = 1;
    for (int i = 0; i < n; i++) {
        result *= b;
    }
    return result;
}

int powersum(int b, int n) {
    long sum = 0;  // use long during addition to detect overflow
    int power = 1;

    for (int i = 0; i <= n; i++) {
        if (sum > MAX_INT - power) {
            return 0; // would overflow when adding
        }
        sum += power;

        if (i != n) {
            if (b != 0 && power > MAX_INT / b) {
                return 0; // would overflow next power
            }
            power *= b;
        }
    }

    return (int)sum;
}