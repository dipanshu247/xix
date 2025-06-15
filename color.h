#pragma once
#include <string>
namespace color {
    const std::string reset = "\e[0m";

    // Text colors
    const std::string black = "\e[30m";
    const std::string red = "\e[31m";
    const std::string green = "\e[32m";
    const std::string yellow = "\e[33m";
    const std::string blue = "\e[34m";
    const std::string magenta = "\e[35m";
    const std::string cyan = "\e[36m";
    const std::string white = "\e[37m";

    // Background colors
    const std::string black_bg = "\e[40m";
    const std::string red_bg = "\e[41m";
    const std::string green_bg = "\e[42m";
    const std::string yellow_bg = "\e[43m";
    const std::string blue_bg = "\e[44m";
    const std::string magenta_bg = "\e[45m";
    const std::string cyan_bg = "\e[46m";
    const std::string white_bg = "\e[47m";

    // Text styles
    const std::string bold = "\e[1m";
    const std::string underline = "\e[4m";

    // Combining styles and colors
    const std::string bold_red = "\e[1;31m";
    const std::string underline_blue = "\e[4;34m";
    const std::string bold_on_blue = "\e[1;44m";
    const std::string bold_on_green = "\e[1;42m";
    const std::string bold_on_yellow = "\e[1;43m";
    const std::string bold_on_cyan = "\e[1;46m";
    const std::string bold_on_magenta = "\e[1;45m";
    const std::string bold_on_white = "\e[1;47m";
    const std::string bold_on_black = "\e[1;40m";
    const std::string bold_on_gray = "\e[1;47m";

}
