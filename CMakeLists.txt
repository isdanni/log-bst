cmake_minimum_required(VERSION 3.10)

project(logbst)

if(LOGBST_BUILD)
    add_executable(header example.cpp)
    target_link_libraries(header PRIVATE_HEADER logbst::logbst_header)
endif()

# ---------------------------------------------------------------------------------------
# TODO: Add Example library
# ---------------------------------------------------------------------------------------
