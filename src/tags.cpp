// tags.cpp — part of ytmp3-tool.

#include "ytmp3tool/tags.h"

#include <cstdio>

namespace ytmp3tool {

Tags::Tags(const std::string& config_path)
    : config_path_(config_path) {}

void Tags::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Tags::run() {
    if (verbose_) std::fprintf(stderr, "[ytmp3-tool] tags: run\n");
    // core logic lives here
    return true;
}

}  // namespace ytmp3tool
