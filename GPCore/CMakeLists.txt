cmake_minimum_required(VERSION 3.22)

set(ENGINE_PROJECT_NAME GPCore)

add_library(${ENGINE_PROJECT_NAME} STATIC
	src/GPCore/Utils/test.cpp
	Includes/GPCore/Utils/test.hpp
)

target_includes_directories(${ENGINE_PROJECT_NAME} PUBLIC Includes)
target_compile_features(${ENGINE_PROJECT_NAME} PUBLIC cxx_std_17)

