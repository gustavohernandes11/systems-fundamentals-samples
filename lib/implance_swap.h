void inplace_swap(int *x, int *y)
{
    // using bitwise rather then a third variable to swap values
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}
