// extractor.cpp — part of ytmp3-tool.

#include "ytmp3tool/extractor.h"

#include <cstdio>

namespace ytmp3tool {

Extractor::Extractor(const std::string& config_path)
    : config_path_(config_path) {}

void Extractor::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Extractor::run() {
    if (verbose_) std::fprintf(stderr, "[ytmp3-tool] extractor: run\n");
    // core logic lives here
    return true;
}

}  // namespace ytmp3tool
