set(CMAKE_TOOLCHAIN_FILE "${CMAKE_CURRENT_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake"
  CACHE STRING "Vcpkg toolchain file")

cmake_minimum_required(VERSION 3.5)

project(qt-vscode-vcpkg)

add_subdirectory("./src")
