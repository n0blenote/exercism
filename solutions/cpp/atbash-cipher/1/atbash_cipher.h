#pragma once
#include <string>

namespace atbash_cipher
{
    const char *alphabet = "abcdefghijklmnopqrstuvwxyz";
    const char *reversed_alphabet = "zyxwvutsrqponmlkjihgfedcba";

    std::string encode(const std::string &input);
    std::string decode(const std::string &input);

    // TODO: add your solution here

} // namespace atbash_cipher
