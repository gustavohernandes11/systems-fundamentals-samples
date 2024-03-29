#include "implance_swap.h"

void reverse_array(int a[], int cnt)
{
    int first, last;
    for (first = 0, last = cnt - 1; first <= last; first++, last--)
    {
        if (last == first)
            return;
        inplace_swap(&a[first], &a[last]);
    }
}
