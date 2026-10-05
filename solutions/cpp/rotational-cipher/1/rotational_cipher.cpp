#include "rotational_cipher.h"

namespace rotational_cipher
{
    std::string alphabet = "abcdefghijklmnopqrstuvwxyz";

    std::string rotate(std::string text, int shift)
    {
        std::string output;
        for (char c : text)
        {
            if (std::isalpha(c))
            {
                const size_t pos = alphabet.find(std::tolower(c));
                char rotated_char = alphabet[(pos + shift) % 26];
                output += std::isupper(c) ? std::toupper(rotated_char) : rotated_char;
            }
            else
            {
                output += c;
            }
        }

        return output;
    }

    // TODO: add your solution here

} // namespace rotational_cipher
