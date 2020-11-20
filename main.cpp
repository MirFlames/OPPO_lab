double my_pow(double x, int y)
{
    double result = 1;

    bool positive = y > 0;
    y = abs(y);
    while (y) {
        if (y % 2 == 0) {
            y /= 2;
            x *= x;
        }
        else {
            y--;
            if (positive)
                result *= x;
            else
                result /= x;
        }
    }
    return result;
}