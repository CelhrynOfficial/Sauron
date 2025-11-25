project(Common)

add_library(Common STATIC
    SharedLog.cpp
    SharedLog.hpp
)

target_include_directories(Common PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})