#include "atbash_cipher.h"

namespace atbash_cipher
{
    const char *alphabet = "abcdefghijklmnopqrstuvwxyz";
    const char *reversed_alphabet = "zyxwvutsrqponmlkjihgfedcba";

    // TODO: add your solution here
    std::string encode(const std::string &input)
    {
        std::string output;
        for (char c : input)
        {
            if (std::isalpha(c))
            {
                char lower_orig = std::tolower(c);
                size_t index = lower_orig - 'a';
                char encoded_char = reversed_alphabet[index];
                output += encoded_char;
            }
            else if (std::isdigit(c))
            {
                output += c;
            }
            else if (std::isspace(c))
            {
                continue; // skip spaces
            }
            else
            {
                // output += c;
            }
        }
        return output;
    }

    std::string decode(const std::string &input)
    {
        return encode(input);
    }

} // namespace atbash_cipher
