cmake_minimum_required(VERSION 3.22)

set(EDITOR_PROJECT_NAME GPEngineEditor)

add_executable(${EDITOR_PROJECT_NAME} src/main.cpp)

target_link_libraries(${EDITOR_PROJECT_NAME} GPEngineCore)
target_compile_features(${EDITOR_PROJECT_NAME} PUBLIC cxx_std_17)

set_target_properties(${EDITOR_PROJECT_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/)