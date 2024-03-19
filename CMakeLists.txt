# Версия cmake
cmake_minimum_required(VERSION 3.26)
# Имя проекта
project(LR1)

# Версия С++
set(CMAKE_CXX_STANDARD 17)

# Добавление в проект lib, bin
add_subdirectory(lib)
add_subdirectory(bin)


enable_testing()
add_subdirectory(tests)

configure_file(tests.txt ${CMAKE_CURRENT_BINARY_DIR}/tests/tests.txt COPYONLY)