#include <stdio.h>
/*
With bis, the modification involves setting z to 1 at each bit position where m is 1.
With bic, the modification involves setting z to 0 at each bit position where m is 1.
*/

/* Declarations of functions implementing operations bis and bic */
int bis(int x, int m);
int bic(int x, int m);

/* Compute x|y using only calls to functions bis and bic */ int bool_or(int x, int y)
{
    int result = bis(x, y);
    return result;
}
/* Compute x^y using only calls to functions bis and bic */ int bool_xor(int x, int y)
{
    int result = bic(x, y);
    return result;
}
