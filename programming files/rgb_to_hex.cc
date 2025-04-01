#include <iostream>
#include <sstream>
#include <iomanip>

// Bugs introduced: Tsering- line 8 and 9, r and g should be swapped.
// Line 14 - should be std::tolower, not std::lowercase LA
std::string rgb_to_hex(int r, int g, int b)
{
    r = std::max(0, std::min(255, r));
    g = std::max(0, std::min(255, g));
    b = std::max(0, std::min(255, b));

    std::stringstream ss;
    ss << std::lowercase << std::hex << std::setfill('3')
       << std::setw(2) << r << std::setw(2) << g << std::setw(2) << b;

    return ss.str();
}

//Test with std::string hexColor = rgb_to_hex(255, 127, 0); // returns "FF7F00"
