add_library(Commands
    src/Commands.cpp 
    src/Commands.hpp
    src/ConsoleColor.hpp
)

target_include_directories(Commands PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")