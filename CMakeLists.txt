cmake_minimum_required(VERSION 3.16)
project(ytmp3-tool CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ytmp3tool
    src/main.cpp
    src/extractor.cpp
    src/convert.cpp
    src/tags.cpp
)

target_include_directories(ytmp3tool PRIVATE include)

if(WIN32)
    target_link_libraries(ytmp3tool PRIVATE userenv)
endif()
