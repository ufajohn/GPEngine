cmake_minimum_required(VERSION 3.22)

set(PROJECT_NAME GPEngine)

add_subdirectory(GPEngineEditor)
add_subdirectory(GPEngineCore)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT GPEngineEditor)