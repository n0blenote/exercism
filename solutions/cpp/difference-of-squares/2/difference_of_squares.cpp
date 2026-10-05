#include "difference_of_squares.h"

namespace difference_of_squares
{

    // TODO: add your solution here
    int square_of_sum(int n)
    {
        // V(V+1)/2 is summation rule for V.
        int summation = n * (n + 1) / 2;
        return summation * summation;
    }
    int sum_of_squares(int n)
    {
        // V(V+1)(2V+1)/6 summation by square of V on each iter.
        return (n * (n + 1) * (2 * n + 1)) / 6;
    }
    int difference(int n)
    {
        return square_of_sum(n) - sum_of_squares(n);
    }
} // namespace difference_of_squares
