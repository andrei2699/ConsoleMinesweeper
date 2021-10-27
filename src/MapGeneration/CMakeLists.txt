set(TARGET MapGeneration)
add_library("${TARGET}"
    src/MapGeneration.cpp 
    src/MapGeneration.hpp
    src/TileTypes.hpp
    src/Tile.cpp
    src/Tile.hpp
)


target_link_libraries("${TARGET}" PRIVATE Commands)

target_include_directories("${TARGET}" PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")