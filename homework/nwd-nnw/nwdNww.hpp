#pragma once

#include <algorithm>
#include <cstdlib>

int NWD(int lhs, int rhs) {
    int result = 0;

    if (lhs == 0 && rhs == 0) {
        result = 0;
    } else if (lhs == 0) {
        result = abs(rhs);
    } else if (rhs == 0) {
        result = abs(lhs);
    } else {
        int a, b, c, flag;
        a = std::max(abs(lhs), abs(rhs));
        b = std::min(abs(lhs), abs(rhs));
        while (a % c != 0 || b % c != 0) {
            c--;
            if (c == 0) {
                break;
            }
        }
        result = c;
    }

    return result;
}

int NWW(int lhs, int rhs) {
    int result = 0;
    if (lhs == 0 || rhs == 0) {
        result = 0;
    } else {
        result = abs(lhs * rhs) / NWD(lhs, rhs);
    }
    return result;
}
