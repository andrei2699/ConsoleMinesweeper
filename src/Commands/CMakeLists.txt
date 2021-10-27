add_library(Commands
    src/Commands.cpp 
    src/Commands.hpp)

target_include_directories(Commands PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")