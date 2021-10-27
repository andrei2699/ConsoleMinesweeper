add_subdirectory(Commands)
add_subdirectory(MapGeneration)

add_executable("${PROJECT_NAME}" main.cpp)

target_link_directories("${PROJECT_NAME}" PUBLIC Commands MapGeneration)

target_link_libraries("${PROJECT_NAME}" PRIVATE Commands MapGeneration)

add_definitions(-DAPP_NAME="${PROJECT_NAME} - ${PROJECT_VERSION}")