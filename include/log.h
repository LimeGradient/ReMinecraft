#pragma once

#include <iostream>
#include <fmt/core.h>


class log {
public:

    void vlogImpl(fmt::string_view format, fmt::format_args args);

    template <typename... Args>
    inline void logImpl(fmt::Fmtstr)
};