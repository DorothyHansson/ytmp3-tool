// tags — part of ytmp3-tool.

#pragma once

#include <string>
#include <vector>

namespace ytmp3tool {

class Tags {
public:
    explicit Tags(const std::string& config_path);

    void configure(const std::string& key, const std::string& value);
    bool run();
    bool verbose() const { return verbose_; }

private:
    std::string config_path_;
    bool verbose_ = false;
};

}  // namespace ytmp3tool
