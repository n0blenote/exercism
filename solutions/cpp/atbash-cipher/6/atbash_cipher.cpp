#include "atbash_cipher.h"

namespace atbash_cipher
{
    const char *alphabet = "abcdefghijklmnopqrstuvwxyz";
    const char *reversed_alphabet = "zyxwvutsrqponmlkjihgfedcba";

    // TODO: add your solution here
    std::string encode(const std::string &input)
    {
        std::string output;
        int count = 0;
        for (char c : input)
        {
            if (std::isalpha(c))
            {
                char lower_orig = std::tolower(c);
                size_t index = lower_orig - 'a';
                char encoded_char = reversed_alphabet[index];
                output += encoded_char;
                count++;
            }
            else if (std::isdigit(c))
            {
                output += c;
                count++;
            }
            else if (std::isspace(c))
            {
                continue; // skip spaces
            }
        }
        for (size_t i = 5; i < output.size(); i += 6)
        {
            output.insert(i, " ");
        }
        return output;
    }

    std::string decode(const std::string &input)
    {
        return encode(input);
    }

} // namespace atbash_cipher
