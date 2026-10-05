#include "atbash_cipher.h"

namespace atbash_cipher
{
    std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
    std::string reversed_alphabet = "zyxwvutsrqponmlkjihgfedcba";

    // TODO: add your solution here
    std::string atbash(const std::string &input, bool is_decode = false)
    {
        std::string output;
        int count = 0;
        for (char c : input)
        {
            if (std::isalpha(c))
            {
                size_t index = alphabet.find(std::tolower(c));
                if (index != std::string::npos)
                {
                    if (!is_decode && count == 5)
                    {
                        output += " ";
                        count = 0;
                    }
                    output += reversed_alphabet[index];
                    count++;
                }
            }
            else if (std::isdigit(c))
            {
                if (!is_decode && count == 5)
                {
                    output += " ";
                    count = 0;
                }
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

    std::string encode(const std::string &input)
    {
        return atbash(input);
    }

    std::string decode(const std::string &input)
    {
        return atbash(input, true);
    }

} // namespace atbash_cipher
