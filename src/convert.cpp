// convert.cpp — part of ytmp3-tool.

#include "ytmp3tool/convert.h"

#include <cstdio>

namespace ytmp3tool {

Convert::Convert(const std::string& config_path)
    : config_path_(config_path) {}

void Convert::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Convert::run() {
    if (verbose_) std::fprintf(stderr, "[ytmp3-tool] convert: run\n");
    // core logic lives here
    return true;
}

}  // namespace ytmp3tool
