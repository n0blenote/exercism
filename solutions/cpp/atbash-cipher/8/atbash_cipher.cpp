#include "atbash_cipher.h"

namespace atbash_cipher
{
    std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
    std::string reversed_alphabet = "zyxwvutsrqponmlkjihgfedcba";

    std::string transform(const std::string &input)
    {
        std::string output;
        for (char c : input)
        {
            if (std::isalpha(c))
            {
                const size_t pos = alphabet.find(std::tolower(c));
                output += reversed_alphabet[pos];
            }
            else if (std::isdigit(c))
            {
                output += c;
            }
        }
        return output;
    }

    std::string grouping(const std::string &input)
    {
        std::string output;
        for (size_t i = 0; i < input.size(); i++)
        {
            if (i > 0 && i % 5 == 0)
            {
                output += ' ';
            }
            output += input[i];
        }
        return output;
    }

    std::string encode(const std::string &input)
    {
        return grouping(transform(input));
    }

    std::string decode(const std::string &input)
    {
        return transform(input);
    }

} // namespace atbash_cipher
