#include "Double.h"

// Perform division and throw Class's object if exception occurs due to an attempt to divide by zero:
double division(int x, int y)
{
    if (x == 0 || y == 0) {
        throw Double{};
    }
    return (static_cast<double>(x) / y);
}
