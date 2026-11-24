// main.cpp — entry point. Wires config and subsystems together.

#include "ytmp3tool/settings.h"
#include "ytmp3tool/extractor.h"
#include "ytmp3tool/convert.h"
#include "ytmp3tool/tags.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    ytmp3tool::Settings settings = ytmp3tool::Settings::load_default();
    ytmp3tool::Extractor extractor(settings.store_path);
    ytmp3tool::Convert convert(settings.store_path);
    ytmp3tool::Tags tags(settings.store_path);
    std::fprintf(stderr, "[ytmp3-tool] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
