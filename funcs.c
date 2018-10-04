int fatorial(int number)
{
    int index, fatorial;
    fatorial = number;
    if (number == 0) {
        return 1;
    }
    for (index = number - 1; index > 1; index--) {
        fatorial *= index;
    }
    return fatorial;
}

int exponentiation(int number, int exponent)
{
    int index, result;
    result = number;
    if (exponent == 0) {
        return 1;
    }
    for (index = 0; index < exponent - 1; index++) {
        result *= number;
    }
    return result;
}
