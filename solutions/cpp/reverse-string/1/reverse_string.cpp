#include "reverse_string.h"

namespace reverse_string
{

    // TODO: add your solution here
    std::string reverse_string(const std::string &input)
    {
        std::string output;
        for (char c : input)
        {
            output.insert(output.begin(), c);
        }
        return output;
    }

} // namespace reverse_string
