#include "trinary.h"
#include <string>

namespace trinary
{

    int to_decimal(const std::string &trinary)
    {
        int decimal = 0;
        int base = 1; // 3^0

        // We want to get the length of the string
        // and iterate from first character to last character
        int base = trinary.length() - 1;
        for (char digit : trinary)
        {
            if (digit < '0' || digit > '2')
            {
                return 0; // Invalid character for trinary
            }
            decimal += (atoi(&digit)) * pow(3, base);
            base--;
        }

        return decimal;
    }
} // namespace trinary
