double my_pow(double x, unsigned int y)
{
    double result = 1;

    while (y) {
        if (y % 2 == 0) {
            y /= 2;
            x *= x;
        }
        else {
            y--;
            result *= x;
        }
    }
    return result;
}