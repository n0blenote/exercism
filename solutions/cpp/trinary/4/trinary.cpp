#include "trinary.h"

namespace trinary
{

    int to_decimal(const std::string &trinary)
    {
        int decimal = 0;

        // We want to get the length of the string
        // and iterate from first character to last character
        int base = trinary.length() - 1; // last digit is base 3^0
        for (char digit : trinary)
        {
            if (digit < '0' || digit > '2')
            {
                return 0; // Invalid character for trinary
            }
            int digit_val = atoi(&digit); // Convert char to int
            decimal += digit_val * std::pow(3, base);
            base--;
        }

        return decimal;
    }
} // namespace trinary
