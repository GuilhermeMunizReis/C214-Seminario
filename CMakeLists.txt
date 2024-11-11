cmake_minimum_required(VERSION 3.10)
project(Tests)

# Ativar o C++ padrão
set(CMAKE_CXX_STANDARD 11)

option(BUILD_TESTS "Build the tests" ON)

# Configuração dos testes
if(BUILD_TESTS)
  # Encontre o Google Test
  find_package(GTest REQUIRED)
  include_directories(${GTEST_INCLUDE_DIRS})

  # Adicione o executável de teste com todos os arquivos fonte necessários
  add_executable(run_tests test.cpp character.h character.cpp item.cpp item.h)

  # Linkar o Google Test e pthread com o executável de teste
  target_link_libraries(run_tests ${GTEST_LIBRARIES} pthread)
endif()

