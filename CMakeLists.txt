cmake_minimum_required(VERSION 3.10)
project(C214-Seminario)

# Ativar o C++ padrão
set(CMAKE_CXX_STANDARD 11)

# Adicionar o Google Test
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Adicionar o executável de teste
add_executable(test.exe test.cpp)

# Linkar o Google Test e o pthread com o executável
target_link_libraries(test.exe ${GTEST_LIBRARIES} pthread)
