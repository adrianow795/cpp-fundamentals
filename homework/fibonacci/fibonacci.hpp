#pragma once

int fibonacci_iterative(int sequence) {
    int result = 0, a = 0, b = 1;
    if (0 == sequence) {
        result = 0;
    } else if (1 == sequence) {
        result = 1;
    } else {
        for (int i = 0; i < sequence - 1; i++) {
            result = a + b;
            a = b;
            b = result;
        }
    }
    return result;
}

int fibonacci_recursive(int sequence) {
    int result = 0;
    if (0 == sequence) {
        return 0;
    } else if (1 == sequence) {
        return 1;
    } else {
        result += fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);
    }
    return result;
}
