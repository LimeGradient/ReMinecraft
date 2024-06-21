#include <iostream>
#include <fmt/core.h>

#include "log.h"

void log::vlogImpl(fmt::string_view format, fmt::format_args args) {
    std::cout << fmt::vformat(format, args) << std::endl;
}