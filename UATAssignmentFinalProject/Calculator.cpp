#include "Calculator.h"

// Double keyword provides use of numbers with decimals, so calculator can handle both decimal and integer mathematical operations.
double Calculator::Calculate(double x, char oper, double y) // Calculate takes number, operator, number, then performs requested operation on those numbers.
{ // Due to return type double, Calculate function will always return a double.
    switch (oper) // Switch checks which operator was provided, and executes that case.
    {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        return x / y;
    default: // Fallback, in case user enters an operator that's not listed, so program doesn't break.
        return 0.0;
    }
}
