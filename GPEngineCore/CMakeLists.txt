cmake_minimum_required(VERSION 3.22)

set(ENGINE_PROJECT_NAME GPEngineCore)

add_library(${ENGINE_PROJECT_NAME} STATIC
	src/GPEngineCore/Utils/test.cpp
	includes/GPEngineCore/Utils/test.hpp
)

target_include_directories(${ENGINE_PROJECT_NAME} PUBLIC includes)
target_compile_features(${ENGINE_PROJECT_NAME} PUBLIC cxx_std_17)

